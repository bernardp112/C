#include <stdio.h>

int main(){

    int idade;
    
    scanf("%d", &idade);

    if (idade < 18){

        printf("Menor de idade");

    }
    
    else{

        printf("Maior de idade");

    }

    return 0;

}