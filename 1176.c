#include <stdio.h>
#include <stdlib.h>

long long int fibo[61];

long long int fibonacci(int n)
{
    if (fibo[n] == -1)
    {
        fibo[n] = fibonacci(n-2) + fibonacci(n-1);
    }
    return fibo[n];
}

int main (){
    int casos, numeros;

    memset(fibo, -1, sizeof(fibo));
    fibo[0] = 0;
    fibo[1] = 1;
    
    scanf("%d", &casos);
    for (int i = 0; i < casos; ++i) {
        scanf("%d", &numeros);

        printf("Fib(%d) = %llu\n", numeros, fibonacci(numeros));
    }

    return 0;
}
