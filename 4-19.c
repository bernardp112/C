#include <stdio.h>

int main(){
   
    int inicio, valor;

    int valores[10];

    for(inicio = 0; inicio < 10; inicio ++){
        
        scanf("%d", &valores[inicio]);
        
    }
    
    for(inicio = 0; inicio < 10; inicio ++){
        
        valor = valores[inicio];

        if (valor % 2 == 0){

            printf("notas = %d\n", valor);

        }
        
        else{

             

        }

    }
   
    return 0;

}
