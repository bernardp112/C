#include <stdio.h>

int main()
{
    
    int matriz[4][3];

    int i, j, valor = 0;
    
    for(i = 0; i < 4; i++){

        for(j = 0; j < 3; j++){

            matriz[i][j] = valor;
            valor++;

        }

    }

    for(i = 0; i < 4; i++){

        for(j = 0; j < 3; j++){

            matriz[i][j] = matriz[i][j] * matriz[3][2];
            
            printf("%d ", matriz[i][j]);
        }

        printf("\n");
        
    }

    return 0;

}