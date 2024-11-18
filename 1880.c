#include <stdio.h>
#include <stdlib.h>

int checa(int n, int base) {
    if (n == 0) return 1;
    int v1[32], v2[32]; 
    int tam = 0;

    while (n != 0) {
        v1[tam] = n % base;
        n /= base;
        tam++;
    }

    for (int i = 0; i < tam; i++) {
        v2[i] = v1[tam - i - 1];
    }

    for (int i = 0; i < tam; i++) {
        if (v1[i] != v2[i]) return 0;
    }
    return 1;
}

int main() {
    int TC;
    scanf("%d", &TC);
    while (TC--) {
        int n;
        scanf("%d", &n);
        int possivel = 0;

        for (int i = 2; i <= 16; i++) {
            if (checa(n, i)) {
                if (possivel)
                    printf(" ");
                else
                    possivel = 1;
                printf("%d", i);
            }
        }

        if (!possivel) printf("-1");
        printf("\n");
    }
    return 0;
}
