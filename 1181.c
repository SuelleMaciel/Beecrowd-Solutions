#include <stdio.h>

int main() {
    int l, i, j; //l = linha
    char a; //operacao
    double matriz[12][12], soma;
    
    scanf("%d", &l);
    scanf(" %c", &a);
    
    for (i = 0; i < 12; i++) {
        for (j = 0; j < 12; j++) { 
            scanf("%lf", &matriz[i][j]);
            if (i == l){
                soma += matriz[l][j];
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