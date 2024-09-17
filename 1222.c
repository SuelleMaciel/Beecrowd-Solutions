#include <stdio.h>
#include <string.h>

#define MAX_LINHA 70
int main() {
    int n_palavras, n_linhas, n_carac;
    char palavra[MAX_LINHA + 1];

    while (scanf("%d %d %d", &n_palavras, &n_linhas, &n_carac) != EOF) {
        int total = 0, caracteres_usados = 0, primeira_palavra = 1;

        for (int i = 0; i < n_palavras; i++) {
            scanf("%s", palavra);
            int tamanho_palavra = strlen(palavra);
            if (caracteres_usados + tamanho_palavra + (primeira_palavra ? 0 : 1) <= n_carac){
                caracteres_usados += tamanho_palavra + (primeira_palavra ? 0 : 1);
            } else {
                caracteres_usados = tamanho_palavra;
                total++;
            }

            primeira_palavra = 0;
        }

        if (caracteres_usados > 0) {
            total++;
        }

        int paginas = (total + n_linhas - 1) / n_linhas;

        printf("%d\n", paginas);
    }
return 0;
}