#include <stdio.h>

int termial(int n){

    int total = 0;

    if(n == 0){

        return (0);

    }

    else{

    total = n + termial(n-1);
    
    return (total);

    }

}

int main(){

    int x;
    printf("Digite o numero: ");
    scanf("%d", &x);
    printf("O termial e: %d", termial(x));

    return 0;

}