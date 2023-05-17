#include <stdio.h>

int resto(int n, int m){

    int total = 0;

    if(n < m){

        return (n);

    }

    else{

    total = resto(n - m, m);

    return (total);

    }

}

int divisao(int n, int m){

    int quoficiente = 1;

    if(n < m){

        return (1);

    }

    else{

    quoficiente += divisao(n - m, m);
    return (quoficiente);

    }

}

int main(){

    int x, y;
    printf("Digite os numeros para dividir: ");
    scanf("%d%d", &x, &y);
    printf("O resto e: %d", resto(x, y));
    printf("\nO quoficiente e: %d", divisao(x, y) - 1);

    return 0;

}