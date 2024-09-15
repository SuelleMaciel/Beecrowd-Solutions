#include <stdio.h>

int main(){
    int linha, coluna, meio, n; // n = tamanho da matriz n x n

    while (scanf("%d", &n) != EOF){ //eof termina com ctrlZ geralmente
        linha = 0 ;
        meio = n/2;

        while (linha < n){
            coluna = 0;

            while(coluna < n){
                if (linha == meio && coluna == meio){
                    printf("4");
                }
                else if (linha >= n / 3 && coluna >= n / 3 && linha < n - n /3 && coluna < n - n / 3){
                    printf("1");
                }
                else if (linha == coluna){
                    printf("2");
                }
                else if (linha + coluna + 1 == n){
                    printf("3");
                }
                else{
                    printf("0");
                }
                coluna++;
            }
            printf("\n");
            linha++;
        }
        printf("\n");
    }
return 0;
}