#include <stdio.h>
#include <math.h>

double probabilidade(int ev1, int ev2, int at) {
    if (at == 3) {
        return (double)ev1 / (double)(ev1 + ev2);
    } else {
        double probWin;
        probWin = (1 - (at / 6.0)) / (at / 6.0); 

        return (1.0 - pow(probWin, ev1)) / (1.0 - pow(probWin, ev1 + ev2));
    } }

int main() {
    int ev1, ev2, at, d, temporaria;
    double probfinal;

    while (1){
        scanf("%d %d %d %d", &ev1, &ev2, &at, &d);
        temporaria = ev1; ev1 = 0;

        if (ev1 == 0 && ev2 == 0 && at == 0 && d == 0) {
            break;}

        while (temporaria > 0)
            temporaria -= d, ++ev1;

        temporaria = ev2; ev2 = 0;

        while (temporaria > 0)
            temporaria -= d, ++ev2;

        probfinal = probabilidade(ev1, ev2, at);
        printf("%.1f\n", probfinal * 100);
    }

    return 0; }