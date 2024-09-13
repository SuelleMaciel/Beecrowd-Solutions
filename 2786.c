#include <stdio.h>
 
int main() {
    int L, C;
    int lajotas_1, lajotas_2;
    
    scanf("%d", &L);
    scanf("%d", &C);
    
    if ( (L < 1 || L > 100) || (C < 1 || C > 100) ) {
        return 1;
    }
    lajotas_1= (L * C) + ( (L-1) * (C -1) );
    lajotas_2= (2 * (L - 1)) + (2 * (C- 1) );
    
    printf("%d\n", lajotas_1);
    printf("%d\n", lajotas_2);
    
    return 0;
}