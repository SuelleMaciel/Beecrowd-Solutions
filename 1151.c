#include <stdio.h>

void fibonacci(int n) {
    int a = 0, b = 1, c;

    for (int i = 0; i < n; i++) {
        if (i == 0) {
            printf("%d", a); 
        } else if (i == 1) {
            printf(" %d", b); 
        } else {
            c = a + b;
            printf(" %d", c); 
            a = b;
            b = c;
        }
    }
    printf("\n");
}

int main() {
    int num;
    scanf("%d", &num);

    if (num > 0 && num < 46) {
        fibonacci(num);
    } else {
        return 1;
    }

    return 0;
}
