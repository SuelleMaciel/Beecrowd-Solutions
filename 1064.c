#include <stdio.h>
#include <string.h>

int main(){
    int positivos = 0;
    double media, nums, total = 0;

    for (int i = 1; i <= 6; i++){
        scanf("%lf", &nums);
        if (nums >= 0){
            positivos++;
            total += nums;
            media = total / positivos;
        }
    }


    printf("%d valores positivos\n", positivos);
    printf("%.1f\n", media);

    return 0;
}