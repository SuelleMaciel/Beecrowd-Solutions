#include <stdio.h>

int main() {
    int n;

    while (1) {
        scanf("%d", &n);
        if (n == 0) {
            break;
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int k = i + 1;
                if (j + 1 < k) {
                    k = j + 1;
                }
                if (n - i < k) {
                    k = n - i;
                }
                if (n - j < k) {
                    k = n - j; 
                }

                printf("%3d", k);

                if (j < n - 1) {
                    printf(" ");
                }
            }
            printf("\n"); 
        }
        printf("\n");
    }

    return 0;
}
