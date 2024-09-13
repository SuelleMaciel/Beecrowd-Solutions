#include <stdio.h>
 
int main() {

    float A, B;
    double media;
    
    scanf("%f", &A);
    scanf("%f", &B);
    
    if ((A < 0 || A > 10) || (B < 0 || B > 10)){
        return 1;
    };
    
    media = ((A * 3.5) + (B * 7.5)) / 11;
    
    printf("MEDIA = %.5lf\n", media);

    return 0;
}