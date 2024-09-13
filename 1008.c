#include <stdio.h>
 
int main() {
 
    int numero, horas;
    float valorporhora, salario;
    
    scanf("%d", &numero);
    scanf("%d", &horas);
    scanf("%f", &valorporhora);
    
    salario = (valorporhora * horas);
    
    printf("NUMBER = %d\n", numero);
    printf("SALARY = U$ %.2lf\n", salario);
    
    return 0;
}