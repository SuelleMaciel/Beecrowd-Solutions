#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b){
    return (*(int *)b - *(int *)a);
}
int main(){
    int n;
    scanf("%d", &n);

    while (n--){
        int m, count = 0;
        scanf("%d", &m);
        int notas[m], ordem[m];

        for (int i = 0; i < m; i++){
            scanf("%d", &notas[i]);
            ordem[i] = notas[i];
        }

        qsort(ordem, m, sizeof(int), compare);

        for (int i = 0; i < m; i++){
            if (notas[i] == ordem[i]){
                count++;
            };
        }

        printf("%d\n", count);
    }
return 0;
}