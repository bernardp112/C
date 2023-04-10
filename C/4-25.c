#include <stdio.h> \\10_04

int main(){
   
    int p = 0, n = 0;

    int v[20];

    while (p != -1){

        printf("Insira o valor: ");
        scanf("%d", &n);

        printf("Insira a casa que deseja colocar o valor(-1 para sair): ");
        scanf("%d", &p);

        if (p < -1 || p >= 20){

            printf("Valor invalido\n");

        }

        else{

            v[p] = n;

        }

    }
    
    for(p = 0; p < 20; p ++){

        printf("valores = %d\n", v[p]);

    }
   
    return 0;

}
