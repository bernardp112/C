#include <stdio.h>

int main(){
   
    int inicio = 0, valor, N = 0, M = 0;
    int notas[N], notasInv[N];

    while (valor != -1 && inicio < 20){
        
        scanf("%d", &valor);
        
        if (valor != -1){
           
            N++;
            notas[inicio] = valor;
            notasInv[inicio] = valor;
        
        }

        inicio++;
   
    }

    M = 0;
    
    for(inicio = N - 1; inicio >= 0; inicio --){
        
        
        notasInv[M] = notas[inicio];

        printf("notas = %d\n", notasInv[M]);
        
        M++;

    }
   
    return 0;

}