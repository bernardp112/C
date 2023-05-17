#include <stdio.h>

int main()
{
    
    int matriz[4][4], matriz2[4][4], matriz3[4][4];

    int i, j, valor = 0;
    
    for(i = 0; i < 4; i++){

        for(j = 0; j < 4; j++){

            matriz[i][j] = valor;
            valor++;

        }
        
    }

    for(i = 0; i < 4; i++){

        for(j = 0; j < 4; j++){

            matriz2[i][j] = valor;
            valor++;

        }
        
    }
    
    for(i = 0; i < 4; i++){

        for(j = 0; j < 4; j++){

            matriz3[i][j] = matriz2[i][j] + matriz[i][j];
            
            printf("%d ", matriz3[i][j]);

        }
        
        printf("\n");

    }

    return 0;

}