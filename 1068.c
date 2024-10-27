#include <stdio.h>
#include <string.h>
#define MAX 1000

const char* parenteses(const char *expressao) {
    int count = 0;

    for (int i = 0; expressao[i] != '\0'; i++) {
        if (expressao[i] == '(') {
            count++;
        } 
        else if (expressao[i] == ')') {
            if (count == 0) {
                return "incorrect";
            }
            count--;
        }
    }
    return (count == 0) ? "correct" : "incorrect";
}

int main() {
    int N;
    scanf("%d", &N);
    getchar();
    
    char expressao[MAX + 1];
    
    for (int i = 0; i < N; i++) {
        fgets(expressao, sizeof(expressao), stdin);
        expressao[strcspn(expressao, "\n")] = 0; //só pra tirar o \n
        printf("%s\n", parenteses(expressao));
    }
    
return 0;
}
