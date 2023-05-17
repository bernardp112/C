#include <stdio.h>

int main()
{
    
    int matriz[4][3];

    int i, j, valor = 0, multiplo = 3;
    
    for(i = 0; i < 4; i++){

        for(j = 0; j < 3; j++){

            matriz[i][j] = valor * multiplo;
            valor++;
            
            printf("%d ", matriz[i][j]);
        }

        printf("\n");
        
    }

    return 0;

}