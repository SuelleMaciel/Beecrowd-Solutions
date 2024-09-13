#include <stdio.h>
#include <string.h>

int main(){
    double vetor[100], um;
    scanf("%lf", &um); //primeiro índice

    for (int i = 0; i < 100; i++){
        vetor[0] = um;
        if (vetor[i] != vetor[0]){
            vetor[i] = vetor[i-1] / 2;
            }
        
        printf("N[%d] = %.4lf\n", i, vetor[i]);
    }
}