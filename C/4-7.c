#include <stdio.h>

int main(){

    int X, Resto;

    scanf("%d", &X);
    
    Resto = X % 2;

    if (Resto == 0){

        printf("O número é par!!");

    }

    else{

        printf("O número é ímpar!!");

    }

    return 0;

}