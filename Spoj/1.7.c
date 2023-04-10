#include <stdio.h>

int main(){
   
    int X1, Y1, X2, Y2, inicio = 1, N, X, Y;
    
    for(; inicio <= 10000; inicio ++){
        
        int total = 0;
        
        scanf("%d%d%d%d", &X1, &Y1, &X2, &Y2);

        if (X1 == Y1 && Y1 == X2 && X2 == Y2 && Y2 == 0){

            break;

        }
        
        scanf("%d", &N);
        
        if (N > 0){

            for(int meteorito = 1; meteorito <= N; meteorito++){

                scanf("%d%d", &X, &Y);

                if (X <= X2 && X >= X1 && Y <= Y1 && Y >= Y2){

                    total = total + 1;

                }

        }
        
        } 
        
        printf("Teste %d \n%d\n\n", inicio, total);
   
    }
   
    return 0;

}