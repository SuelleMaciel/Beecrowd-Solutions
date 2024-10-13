#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char comportamento;
    char nome[21];
} Crianca;

int compare(const void *a, const void *b) {
    Crianca *criancaA = (Crianca *)a;
    Crianca *criancaB = (Crianca *)b;
    return strcmp(criancaA->nome, criancaB->nome);
}

int main() {
    int n, bem = 0, mal = 0;
    Crianca criancas[100];

    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf(" %c %[^\n]", &criancas[i].comportamento, criancas[i].nome);
        if (criancas[i].comportamento == '+') {
            bem++;
        }
        else if (criancas[i].comportamento == '-') {
            mal++;
        }
    }

    qsort(criancas, n, sizeof(Crianca), compare);

    for(int i = 0; i < n; i++) {
        printf("%s\n", criancas[i].nome);
    }

    printf("Se comportaram: %d | Nao se comportaram: %d\n", bem, mal);

    return 0;
}
