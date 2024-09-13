#include <stdio.h>
 
int main() {
    int peca_um, num_pecas_um, peca_dois, num_pecas_dois;
    float valor_peca_um, valor_peca_dois;
    
    scanf("%d %d %f", &peca_um, &num_pecas_um, &valor_peca_um);
    scanf("%d %d %f", &peca_dois, &num_pecas_dois, &valor_peca_dois);
    
    double valor_pecas_um = num_pecas_um * valor_peca_um;
    double valor_pecas_dois = num_pecas_dois * valor_peca_dois;
    
    double valor_final = (valor_pecas_um + valor_pecas_dois);
    printf("VALOR A PAGAR: R$ %.2lf", valor_final);
 
    return 0;
}