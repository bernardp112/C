#include <stdio.h>

int main(){
    
    int valores[20] = {3, 6, 10, 11, 15, 19, 25, 26, 31, 32, 38, 39, 40, 44, 46, 49, 52, 57, 60, 64};
    int valor_buscado = 15;
    int inicio = 0, final = 19, meio, posicao = -1, achou = 0;

    while(inicio <= final && !achou){
        
        meio = (inicio + final)/2;
        
        if (valores[meio] == valor_buscado){

            posicao = meio;
            //break;
            achou = 1;
            
        }

        else if (valores[meio] < valor_buscado){

            inicio = meio + 1; 

        }

        else if (valores[meio] > valor_buscado){

            final = meio - 1;

        }

    }

    printf("Posicao: %d", posicao);
    
    return 0;
}
