#include <stdio.h>
#include <stdlib.h>

int M; //modulo 

int compare(const void *a, const void *b) {
    int x = *(int *)a;
    int y = *(int *)b;

    int mod_x = x % M;
    int mod_y = y % M;

    if (mod_x != mod_y)
        return mod_x - mod_y;

    int impar_x = x % 2 != 0;
    int impar_y = y % 2 != 0;

    if (impar_x && !impar_y)
        return -1;  
    if (!impar_x && impar_y)
        return 1; 

    if (impar_x && impar_y)
        return y - x;

    return x - y;
}

int main() {
    int N; //numeros 

    while (1) {
        scanf("%d %d", &N, &M);

        if (N == 0 && M == 0) {
            break;
        }

        int vetor[N];
        printf("%d %d\n", N, M);

        for (int i = 0; i < N; i++) {
            scanf("%d", &vetor[i]);
        }

        qsort(vetor, N, sizeof(int), compare);

        for (int i = 0; i < N; i++) {
            printf("%d\n", vetor[i]);
        }
    }

    printf("0 0\n");

    return 0;
}
