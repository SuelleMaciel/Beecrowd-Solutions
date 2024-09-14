#include <stdio.h>

int contar_digitos(int num) {
    int digitos = 0;
    if (num == 0) return 1;
    while (num != 0) {
        digitos++;
        num /= 10;
    }
    return digitos;
}

int main() {
    int N;

    while (1) {
        scanf("%d", &N);
        
        if (N == 0) {
            break;
        }

        int matriz[N][N];
        matriz[0][0] = 1;

        for (int j = 1; j < N; j++) {
            matriz[0][j] = matriz[0][j - 1] * 2;
        }
        for (int i = 1; i < N; i++) {
            matriz[i][0] = matriz[i - 1][0] * 2;
        }

        for (int i = 1; i < N; i++) {
            for (int j = 1; j < N; j++) {
                matriz[i][j] = matriz[i][j - 1] * 2;
            }
        }

        int T = contar_digitos(matriz[N - 1][N - 1]);

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (j == N - 1) {
                    printf("%*d", T, matriz[i][j]);
                } else {
                    printf("%*d ", T, matriz[i][j]);
                }
            }
            printf("\n");
        }

        printf("\n");
    }

    return 0;
}
