#include <stdio.h> \\8_04

int main(){
   
    int inicio, inicio2, soma = 0, valor;

    int valores[10], valores2[10];

    for(inicio = 0; inicio < 10; inicio ++){
        
        printf("\nprimeiro: ");
        scanf("%d", &valores[inicio]);
        
    }

    for(inicio = 0; inicio < 10; inicio ++){
        printf("\nsegundo: ");
        scanf("%d", &valores2[inicio]);
        
    }
    
    
    inicio = 0;
    
    while(inicio < 10){

        valor = valores2[inicio];
        
        for(inicio2 = 0; inicio2 < 10; inicio2++){
            
            if (valor == valores[inicio2]){

                soma ++;

            }
        
        }
        
        if (soma >= 1){

            printf("aparece nas duas o valor %d\n", valor);

        }

        soma = 0;
        inicio ++;

    }
   
   return 0; 

}