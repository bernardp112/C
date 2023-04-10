#include <stdio.h>

int main(){
   
    int X, inicio = 1, total = 0;
    
    for(; inicio <= 100; inicio ++){
      
        scanf("%d", &X);

        if (total <= X){

            total = X;

        }

        if (X == 0){

            break;

        }
   
    }
    
    printf("%d", total);
   
    return 0;

}