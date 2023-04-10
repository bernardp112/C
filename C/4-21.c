#include <stdio.h>

int main(){
   
    int inicio, valor, valorFinal, soma = 0;

    int valores[10];

    for(inicio = 0; inicio < 10; inicio ++){
        
        scanf("%d", &valores[inicio]);
        
    }

    valorFinal = valores[9];
    
    for(inicio = 0; inicio < 10; inicio ++){
        
        valor = valores[inicio];

        if (valor == valorFinal){

            soma ++;

        }
        
        else{

             

        }

    }

    printf("Repeticoes do ultimo valor: %d", soma);
   
    return 0;

}