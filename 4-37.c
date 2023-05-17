#include <stdio.h>

int main(){

    int inicio;

    int valores[10];

    for(inicio = 0; inicio < 10; inicio ++){
        
        scanf("%d", &valores[inicio]);
        
    }

    for(inicio = 0; inicio < 10; inicio ++){
        
        printf("O endereco da posicao %d e %d.\n", inicio, &valores[inicio]);
        
    }

    return 0; 

}