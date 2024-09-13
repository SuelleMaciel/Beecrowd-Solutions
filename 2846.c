#include <stdio.h>
#include <stdbool.h>

int fibonacci(int n) {
    int a = 1, b = 1, c;

    for (int i = 2; i < n; i++) {
        c = a;
        a = b;
        b = c + b;
    }
    return b; }

bool isFibonacci(int num) {
    int a = 1, b = 1, c;

    while (a < num) {
        c = a;
        a = b;
        b = c + b;
    }
    return a == num; }

int main() {
    int n; //indice do numero

    scanf("%d", &n);
    if (n < 1 || n > 100000) {
        return 1; 
    }

    int contador = 0; //numeros que não estão na sequencia
    int num = 1; //numero que eu to analisando

    while (contador < n) {
        if (!isFibonacci(num)) {
            contador++;
        }
        if (contador < n) {
            num++;
        }}

    printf("%d\n", num);

    return 0; }