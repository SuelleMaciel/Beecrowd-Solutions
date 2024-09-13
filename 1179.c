#include <stdlib.h>
#include <stdio.h>

void printar(char *nome, int *vetor, int n){
    for (int i = 0; i < n; ++i){
        printf("%s[%d] = %d\n", nome, i, vetor[i]);
    }
}

int main(){
    int valor, par[5], impar[5], n_par, n_impar;

    //contadores pra saber se a array excedeu o limite ou não
    n_par = 0;
    n_impar = 0;
    for (int i = 0; i < 15; ++i){
        scanf("%d", &valor);

        if (abs(valor) % 2){
            impar[n_impar++] = valor;

            if (n_impar == 5){ //se tiver cheio
                printar("impar", impar, n_impar);
                n_impar = 0; //zera o contador
            }
        }
        else{
            par[n_par++] = valor;

            if (n_par == 5){ //se tiver cheio²
                printar("par", par, n_par);
                n_par = 0; //zera o contador
    }}}

    printar("impar", impar, n_impar);
    printar("par", par, n_par);

    return 0;
}