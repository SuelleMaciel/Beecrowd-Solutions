#include <stdio.h>
#include <string.h>
 
int main() {
    char classe1[20], classe2[20], classe3[20];

    scanf("%s %s %s", &classe1, &classe2, &classe3);
    
    if (strcmp(classe1, "vertebrado") == 0 ){

        if (strcmp(classe2, "ave") == 0){

            if (strcmp(classe3, "carnivoro") == 0){
                printf("aguia\n");
            }

            else if (strcmp(classe3, "onivoro") == 0){
                printf("pomba\n");
            }
        }
        else if (strcmp(classe2, "mamifero") == 0){

            if (strcmp(classe3, "onivoro") == 0){
                printf("homem\n");
            }

            else if (strcmp(classe3, "herbivoro") == 0){
                printf("vaca\n");
            }}}
            
    else if (strcmp(classe1, "invertebrado") == 0){

        if (strcmp(classe2, "inseto") == 0){

            if (strcmp(classe3, "hematofago") == 0){
                printf("pulga\n");
            }

            else if (strcmp(classe3, "herbivoro") == 0){
                printf("lagarta\n");
            }
            
        }
        else if (strcmp(classe2, "anelideo") == 0){

            if (strcmp(classe3, "hematofago") == 0){
                printf("sanguessuga\n");
            }

            else if (strcmp(classe3, "onivoro") == 0){
                printf("minhoca\n");
            }
        }
    }
    else {
        return 1;
    }
 
    return 0;
}