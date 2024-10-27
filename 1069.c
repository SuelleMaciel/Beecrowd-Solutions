#include <stdio.h>
#include <string.h>

#define MAX 1000

int duplas(const char *lista){
    int pilha = 0, duplas = 0;

    for (int i = 0; lista[i] != '\0'; i++){
        if (lista[i] == '<'){
            pilha++;
        }
        else if (lista[i] == '>'){
            if (pilha > 0){
                pilha--;
                duplas++;
            }
        }
    }
    return duplas;
}

int main(){
    char lista[MAX + 1];
    int n;

    scanf("%d", &n);

    int diamantes = 0;

    for (int i = 0; i < n; i++){
        scanf(" %s", lista);
        diamantes = duplas(lista);
        printf("%d\n", diamantes);
    }

return 0;
}
