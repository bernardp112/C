#include <stdio.h>

int main(){
   
    int N, X, inicio = 1, total = 0;
    
    scanf("%d", &N);
    
    for(; inicio <= N; inicio ++){
      
        scanf("%d", &X);
        total = total + X;
   
    }
   
    printf("%d", total);
   
    return 0;

}