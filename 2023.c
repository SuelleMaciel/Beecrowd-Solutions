#include <stdio.h>
#include <string.h>
#include <ctype.h> 

int main() {
    char nome[100];
    char ultimonome[1001] = ""; 

    while (fgets(nome, sizeof(nome), stdin) != NULL) {
        nome[strcspn(nome, "\n")] = '\0';
        
        if (ultimonome[0] == '\0' || strcasecmp(nome, ultimonome) > 0) {
            strcpy(ultimonome, nome);
        }
    }

    if (ultimonome[0] != '\0') {
        printf("%s\n", ultimonome);
    }

    return 0;
}
