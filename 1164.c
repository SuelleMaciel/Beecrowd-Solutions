#include <stdio.h>
 
int main() {
    
    int i, testes = 0;

    scanf("%d", &testes);

    if (testes < 1 || testes > 20){
        return 1;
    }

    for (i = 0; i < testes; i++) {
        int numero = 0;
        int soma = 0;

        scanf("%d", &numero);

        for (int j = 1; j <= numero / 2; j++) {
            if (numero % j == 0) {
                soma += j;
            }
        }
        
        if (soma == numero) {
            printf("%d eh perfeito\n", numero);
        }
        else {
            printf("%d nao eh perfeito\n", numero);
        }}

    
    return 0;
}