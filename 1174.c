#include <stdio.h>
 
int main() {
    float vetor[100];
    
    for (int j = 0; j < 100; ++j){
        scanf("%f", &vetor[j]);
    }

    for (int i = 0; i < 100; ++i){
            if (vetor[i] <= 10){
            printf("A[%d] = %.1f\n", i, vetor[i]);
        }
    }
    return 0;
}