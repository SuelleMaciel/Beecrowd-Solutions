#include <stdio.h>

int main (){
    char nome[30];
    double salario, vendas, salariofinal;

    scanf("%s %lf %lf", &nome, &salario, &vendas);
    
    salariofinal = (0.15 * vendas) + salario;

    printf("TOTAL = R$ %.2lf\n", salariofinal);

    return 0;
}