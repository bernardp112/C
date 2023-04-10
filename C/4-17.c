#include <stdio.h>

int main(){
   
    int inicio = 0, valor, N = 0;
    int notas[N];

    while (valor != -1 && inicio < 10){
        
        scanf("%d", &valor);
        
        if (valor != -1){
            
            N++;
            notas[inicio] = valor;
            
        }
        
        inicio++;
   
    }
    
    for(inicio = N-1; inicio >= 0; inicio --){

        printf("notas = %d\n", notas[inicio]);

    }
   
    return 0;

}