#include <stdio.h>
#include <stdbool.h>

int main(){
    int l, c, qtzeros, zeros = 0, valores;
    _Bool sim = true, bol;

    scanf("%d %d", &l, &c);
    
    for (int i = 0; i < l; i++){
        qtzeros = 0;
        bol = true;

        for (int j = 0; j < c; j++){
            scanf("%d", &valores);

            if (valores == 0 && bol){
                qtzeros++; 
            } else {
                bol = false;
            }
        }

        if (i != 0){  
            if (qtzeros > zeros || (qtzeros == zeros && qtzeros == c)){
                zeros = qtzeros;
            } else {
                zeros = 0;
                sim = false; 
            }
        } else {
            zeros = qtzeros; 
        }
    }

    if (sim && zeros > 0){
        printf("S\n");
    } else {
        printf("N\n");
    }

    return 0;
}
