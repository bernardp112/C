#include <stdio.h>

int main(){
   
    int X, inicio, soma = 0;
    
    scanf("%d", &X);
    int notas[X];

    for(inicio = 0; inicio < X; inicio ++){
        
        scanf("%d", &notas[inicio]);
        
    }
    
    for(inicio = 0; inicio < X; inicio ++){

        printf("notas = %d\n", notas[inicio]);

        soma = notas[inicio] + soma;

    }

    printf("Soma: %d", soma);
   
    return 0;

}