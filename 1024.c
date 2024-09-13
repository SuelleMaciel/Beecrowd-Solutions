#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    int len, N;
    char M[1001], aux;

    scanf("%d\n", &N);

    for (int i = 0; i < N; ++i){
        fgets(M, sizeof(M), stdin);

        len = strlen(M);
        for (int j = 0; j < len; ++j) {
            if (isalpha(M[j])){
                M[j] += 3;
                }
        }
        for (int j = 0; j < len/2; ++j){
            aux = M[j];
            M[j] = M[len - 1 - j];
            M[len - 1 - j] = aux;
        }
        for (int j = len/2; j < len; ++j){
            --M[j];
        }

        printf("%s\n", M);
    }

return 0;
}