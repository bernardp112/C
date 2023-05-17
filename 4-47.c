#include <stdio.h>

int recursiva(int n, int m){

    int total = 0;

    if(n == m){

        return (n);

    }

    else{

    total = n * recursiva(n + 1, m);
    
    return (total);

    }

}

int main(){

    int x, y;
    printf("Digite os numeros para a funcao(x < y): ");
    scanf("%d%d", &x, &y);
    printf("O resultado e: %d", recursiva(x, y));

    return 0;

}