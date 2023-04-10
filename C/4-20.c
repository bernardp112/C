#include <stdio.h>

int main(){
   
    int inicio, valor;

    int valores[10], valores2[10];

    for(inicio = 0; inicio < 10; inicio ++){
        
        scanf("%d", &valores[inicio]);
        
    }
    
    for(inicio = 0; inicio < 10; inicio ++){
        
        valor = valores[inicio];

        if (valor % 2 == 0){

            printf("Par = %d\n", valor);
            valores2[inicio] = 2;

        }
        
        else{

            printf("Impar = %d\n", valor);
            valores2[inicio] = 1;

        }

    }
   
    for(inicio = 0; inicio < 10; inicio ++){


        printf("Resultado = %d\n", valores2[inicio]);




    }

    return 0;

}