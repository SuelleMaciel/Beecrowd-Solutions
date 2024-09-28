#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int calcula_tamanho(int lin, int col, int len, long long int mat[len][len]) {
    long long int num = mat[lin][col];
    return (num == 0) ? 1 : 2 * log10(num) + 1;
}

void ler_matriz(int len, long long int mat[len][len]) {
    for (int lin = 0; lin < len; lin++)
        for (int col = 0; col < len; col++)
            scanf("%llu", &mat[lin][col]);
}

void resposta_formatada(int len, long long int mat[len][len], int t, int stop) {

    printf("Quadrado da matriz #%d:\n", t);
    
    for (int lin = 0; lin < len; lin++) {
        for (int col = 0; col < len; col++) {
            int tamanho = 0;
            for (int aux = 0; aux < len; aux++) {
                int aux_tamanho = calcula_tamanho(aux, col, len, mat);
                if (aux_tamanho > tamanho)
                    tamanho = aux_tamanho;
            }

            if (col > 0)
                printf(" ");

            printf("%*llu", tamanho, (mat[lin][col] * mat[lin][col]));
        }
        printf("\n");
    }

    if (stop != 0)
        printf("\n");
}

int main() {
    int qtd_matrizes;

    scanf("%d", &qtd_matrizes);
    for (int i = 0; i < qtd_matrizes; i++) {
        int dimensao;
        scanf("%d", &dimensao);

        long long int matriz[dimensao][dimensao];

        ler_matriz(dimensao, matriz);
        resposta_formatada(dimensao, matriz, i + 4, qtd_matrizes - i - 1);
    }
    return 0;
}
