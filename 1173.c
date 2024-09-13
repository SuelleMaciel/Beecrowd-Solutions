#include <stdio.h>
#include <string.h>

int main(){
    int N[10];
    int V;

    scanf("%d", &V);
  
    for (int i = 0; i < 10; i++){
      N[0] = V;
      
      if (N[i] != N[0]){
        N[i] = N[i-1] * 2;
      }
      
      printf("N[%d] = %d\n", i, N[i]);
    }
  
return 0;
}