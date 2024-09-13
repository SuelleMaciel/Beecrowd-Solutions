#include <stdio.h>
#include <string.h>

int maior(int a, int b) {
    return (a > b) ? a : b; }

int main() {
    char palavra1[51]; 
    char palavra2[51]; 
    while(scanf(" %[^\n] %[^\n]", palavra1, palavra2) != EOF) {
        int i, j, k, cont_max, len1, len2;
        len1 = strlen(palavra1);
        len2 = strlen(palavra2);

        cont_max = 0; 
        for (i = 0; i < len1; i++) {
            for (j = 0; j < len2; j++) {
                 k = 0;

                while ((i + k < len1) && (j + k < len2) && (palavra1[i + k] == palavra2[j + k])) {
                    k++;
                }
                cont_max = maior(cont_max, k);
            } }
        printf("%d\n", cont_max);
    }

return 0;
}