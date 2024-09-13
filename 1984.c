#include <stdio.h>
 
int main() {
    long long int digito, num;

    scanf("%llu", &num);

    while (num > 0) {
        digito = num % 10;
        printf("%llu", digito); 
        num = num / 10;
    }
    printf("\n");
 
    return 0;
}