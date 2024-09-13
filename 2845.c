#include <stdio.h>

int mdc(int a, int b) {
    while (b != 0) {
        int X = b;
        b = a % b;
        a = X;
    }
    return a;
}

int main() {
    int n_duendes;
    
    scanf("%d", &n_duendes);
    
    int identificador;
    scanf("%d", &identificador);
    
    int maior_identificador = identificador;
    
    for (int i = 1; i < n_duendes; i++) {
        scanf("%d", &identificador);
        if (identificador > maior_identificador) {
            maior_identificador = identificador;
        }
    }
    
    int anfitriao = maior_identificador + 1;
    
    int valido = 0;
    while (!valido) {
        valido = 1;
        int temp_identificador = maior_identificador;
        
        if (mdc(anfitriao, temp_identificador) != 1) {
            valido = 0;
        }
        
        if (!valido) {
            anfitriao++;
        }
    }
    
    printf("%d\n", anfitriao);
    
    return 0;
}
