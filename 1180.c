#include <stdio.h>
#include <string.h>

int main(){
    int N, menor;
    int posicao = 0;

    scanf("%d", &N);

    int X[N];
    menor = X[N-1];

    for (int i = 0; i < N; ++i){
        scanf("%d", &X[i]);
        for (int j = 0; j < N; ++j){
            if (X[i] < menor){
            menor = X[i];
            posicao = i;
        }}
    }

    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", posicao);

    return 0;
}