#include <stdio.h>

int main(){
    int n;
    
    while (1){
        scanf("%d", &n);
        int matriz[n][n];

        if (n == 0){
            break;
        }

        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                if (i == j){
                    matriz[i][j] = 1;
                }
                else if (i < j){
                    matriz[i][j] = j - i + 1;
                }
                else{
                    matriz[i][j] = i - j + 1;
                }
                
                
            }
        }
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                if (j == 0) {
                    printf("%3d", matriz[i][j]);
                    } 
                    else {
                    printf(" %3d", matriz[i][j]);
                }

            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
