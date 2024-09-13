#include <stdio.h>
 
int main() {
    int N;
    scanf("%d", &N);
    
    for (int i = 1; i <= N; i++) {
        float um, dois, tres;
        float media;
        
        scanf("%f %f %f", &um, &dois, &tres);
        
        media = ((um * 2) + (dois * 3) + (tres * 5)) / 10;
        
        printf("%.1f\n", media);
    }
    
    return 0;
}