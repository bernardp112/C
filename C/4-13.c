#include <stdio.h>

int main(){

    int n, inicio = 1, soma = 0;

    printf("\ninsira um numero inteiro positivo: ");
    scanf("%d", &n);

    if (n < 1){

        printf("\n Nao e possivel exibir os numeros de intervalo");

    }

    else{
       
        for(inicio; inicio <= n; inicio ++){
            
            soma = soma + inicio;
       
        }

        printf("A soma deu %d", soma);

    }
    
    return 0;

}