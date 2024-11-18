#include <stdio.h>
#include <stdlib.h>

#define MAX 100010
#define LIM 2147483647

int vetor[MAX], n, k, i, resposta = LIM;

int comparacao(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    scanf("%d %d", &n, &k);
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }

    qsort(vetor, n, sizeof(int), comparacao);

    for (int i = 0; i <= k; i++) {
        if (vetor[i + (n - k) - 1] - vetor[i] < resposta) {
            resposta = vetor[i + (n - k) - 1] - vetor[i];
        }
    }

    printf("%d\n", resposta);
    return 0;
}
