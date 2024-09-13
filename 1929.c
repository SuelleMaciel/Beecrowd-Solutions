#include <stdio.h>

int main(){
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if ((a < b + c && b < a + c && c < a + b) ||
        (a < b + d && b < a + d && d < a + b) ||
        (a < c + d && c < a + d && d < a + c) ||
        (b < c + d && c < b + d && d < b + c)){
        printf("Sim\n");
    }
    else {
        printf("Nao\n");
    }

    return 0;
}