#include <stdio.h>

int potencia(int n){

    int total = 0;

    if(n <= 1){

        return (2);

    }

    else{

    total = 2 * potencia(n-1);
    
    return (total);

    }

}

int main(){

    int x;
    printf("Digite o numero: ");
    scanf("%d", &x);
    printf("A potencia de 2 com o numero e: %d", potencia(x));

    return 0;

}