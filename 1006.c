#include <stdio.h>
 
int main() {

    float A, B, C;
    double media;
    
    scanf("%f", &A);
    scanf("%f", &B);
    scanf("%f", &C);
    
    if ((A < 0 || A > 10) || (B < 0 || B > 10)){
        return 1;
    };
    
    media = ((A * 2) + (B * 3) + (C * 5)) / 10;
    
    printf("MEDIA = %.1lf\n", media);

    return 0;
}