#include <stdio.h>

int main() {
    int testes, i, maisveloz;

    while (scanf("%d", &testes) != EOF) {
        
        if (testes < 1 || testes > 500) {
            return 1;  
        }
        
        int lesmas[testes];

        for (i = 0; i < testes; i++) {
            scanf("%d", &lesmas[i]);

            if (lesmas[i] < 1 || lesmas[i] > 50) {
                return 1;
            }
        }

        maisveloz = lesmas[0];

        for (i = 1; i < testes; i++) {
            if (lesmas[i] > maisveloz) {
                maisveloz = lesmas[i];
            }
        }

        if (maisveloz < 10) {
            printf("1\n");
        } else if (maisveloz < 20) {
            printf("2\n");
        } else {
            printf("3\n");
        }
    }

    return 0;
}
