#include <stdio.h>
 
int main() {
    int valor, vetor[1000];
    
    scanf("%d", &valor);
    
    for (int i = 0; i < 1000; i++){
        vetor[i] = i % valor;
    }
    for (int i = 0; i < 1000; i++){
        printf("N[%d] = %d\n", i, vetor[i]);
    }
    return 0;
}