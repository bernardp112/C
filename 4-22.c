#include <stdio.h>

int main(){
   
    int inicio, inicio2, valor, soma = 0;

    int valores[10];

    for(inicio = 0; inicio < 10; inicio ++){
        
        scanf("%d", &valores[inicio]);
        
    }

    inicio = 0;
    
    while(inicio < 10){
        
        valor = valores[inicio];
        
        for(inicio2 = 0; inicio2 < 10; inicio2++){
            
            if (valor == valores[inicio2]){

                soma ++;

            }
        
        }
        
        if (soma > 1){

            printf("existem %d de %d\n", soma, valor);

        }

        soma = 0;
        inicio ++;

    }
   
    return 0;

}