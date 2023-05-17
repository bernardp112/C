#include <stdio.h>

int multiplicacao(int n, int m){

    int total = 0;

    if(m <= 1){

        return (n);

    }

    else{

    total = n + multiplicacao(n, m - 1);
    
    return (total);

    }

}

int main(){

    int x, y;
    printf("Digite os numeros para multiplicar: ");
    scanf("%d%d", &x, &y);
    printf("O resultado e: %d", multiplicacao(x, y));

    return 0;

}