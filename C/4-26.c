#include <stdio.h> \\11_04

int main(){
   
    int p, n, remover = 0;

    int v[20];

    for(p = 0; p < 20; p++){

        printf("Insira o valor: ");
        scanf("%d", &n);

        v[p] = n;

    }

    printf("Insira a posicao para remover: ");
    scanf("%d", &remover);

    for(p = 0; p < remover; p++){

        printf("valores = %d\n", v[p]);

    }

    for(p = remover; p < 19; p++){

        v[p] = v[p + 1];

        printf("valores = %d\n", v[p]);

    }
   
    return 0;

}