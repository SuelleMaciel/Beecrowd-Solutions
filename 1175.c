#include <stdio.h>
#include <string.h>

int main(){
    int vetor[20], temp;

    for (int i = 0; i < 20; i++){
        scanf("%d", &vetor[i]);
    }
    for (int i = 0; i < 10; i++){
        temp = vetor[i];
        vetor[i] = vetor[19 - i];
        vetor[19 - i] = temp;
    }
    for (int i = 0; i < 20; i++){
        printf("N[%d] = %d\n", i, vetor[i]);
    }
    return 0;
}