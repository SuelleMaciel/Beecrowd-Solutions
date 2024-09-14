#include <stdio.h>

int main() {
    int c, i, j; //l = linha
    char a; //operacao
    double matriz[12][12], soma;
    
    scanf("%d", &c);
    scanf(" %c", &a);
    
    for (i = 0; i < 12; i++) {
        for (j = 0; j < 12; j++) { 
            scanf("%lf", &matriz[i][j]);
            if (j == c){
                soma += matriz[i][c];
            }
        }
    }
    if (a == 'M'){
        soma /= 12;}
    else {
        soma = soma;
    }
    
    printf("%.1f\n", soma);
    
    return 0;
}