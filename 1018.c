#include <stdio.h>

int main() {
    int notas, notas100, notas50, notas20, notas10, notas5, notas2, notas1;
    scanf("%d", &notas);

    printf("%d\n", notas);

    notas100 = notas / 100;
    notas %= 100;

    notas50 = notas / 50;
    notas %= 50;

    notas20 = notas / 20;
    notas %= 20;

    notas10 = notas / 10;
    notas %= 10;

    notas5 = notas / 5;
    notas %= 5;

    notas2 = notas / 2;
    notas %= 2;

    notas1 = notas;

    printf("%d nota(s) de R$ 100,00\n", notas100);
    printf("%d nota(s) de R$ 50,00\n", notas50);
    printf("%d nota(s) de R$ 20,00\n", notas20);
    printf("%d nota(s) de R$ 10,00\n", notas10);
    printf("%d nota(s) de R$ 5,00\n", notas5);
    printf("%d nota(s) de R$ 2,00\n", notas2);
    printf("%d nota(s) de R$ 1,00\n", notas1);

    return 0;
}
