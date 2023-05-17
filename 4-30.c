#include <stdio.h>

int main()
{
    
    int matriz[20][10];

    int i, j, valor = 0;
    
    for(i = 0; i < 20; i++){

        for(j = 0; j < 10; j++){

            matriz[i][j] = valor;
            valor++;
            printf("%i ", matriz[i][j]);

        }
        
        printf("\n");

    }

    return 0;

}