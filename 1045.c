#include <stdio.h>

int main(){
    float A, B, C, maior, medio, menor;

    scanf("%f %f %f", &A, &B, &C);

    if (A >= B && A >= C){
        maior = A;
        medio = (B >= C) ? B : C;
        menor = (B >= C) ? C : B;
    }
    else if (B >= A && B >= C){
        maior = B;
        medio = (A >= C) ? A : C;
        menor = (A >= C) ? C : A;
    }
    else{
        maior = C;
        medio = (A >= B) ? A : B;
        menor = (A >= B) ? B : A;
    }

    if (maior >= (medio + menor)){
        printf("NAO FORMA TRIANGULO\n");
    }
    else{
        if (maior * maior == (medio * medio + menor * menor)){
            printf("TRIANGULO RETANGULO\n");
        }
        else if (maior * maior > (medio * medio + menor * menor)){
            printf("TRIANGULO OBTUSANGULO\n");
        }
        else if (maior * maior < (medio * medio + menor * menor)){
            printf("TRIANGULO ACUTANGULO\n");
        }
        if (maior == medio && medio == menor){
            printf("TRIANGULO EQUILATERO\n");
        }
        else if (maior == medio || medio == menor || maior == menor){
            printf("TRIANGULO ISOSCELES\n");
        }
    }

    return 0;
}
