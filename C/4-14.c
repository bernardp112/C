#include <stdio.h>

int main(){

    int n,inicio = 2, soma = 0;

    printf("\ninsira um numero inteiro positivo: ");
    scanf("%d", &n);

    if (n < 1){

        printf("\n Nao e possivel exibir os numeros de intervalo");

    }

    else{
       
        for(; inicio <= n; inicio += 2){
          
            soma = soma + inicio;
       
        }

        printf("A soma dos pares deu %d", soma);
  
    }
    
    return 0;

}