#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int biblioteca[1000];
    int n;

    while (scanf("%d", &n) != EOF) {
        for (int i = 0; i < n; i++) {
            scanf("%d", &biblioteca[i]);
        }

        qsort(biblioteca, n, sizeof(int), compare);

        for (int i = 0; i < n; i++) {
            printf("%04d\n", biblioteca[i]);
        }
    }

return 0;
}
