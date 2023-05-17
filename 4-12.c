#include <stdio.h>

int main(){

    int n,inicio = 1;

    printf("\ninsira um numero inteiro positivo: ");
    scanf("%d", &n);

    if (n < 1){

        printf("\n Nao e possivel exibir os numeros de intervalo");

    }

    else{
       
        for(inicio; inicio <= n; inicio ++){
          
            printf("\n %d", inicio);
       
        }

    }
    
    return 0;

}