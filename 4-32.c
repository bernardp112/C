#include <stdio.h>

int main()
{
    
    int matriz[3][3];

    int i, j, valor = 0, total = 0;
    
    for(i = 0; i < 3; i++){

        for(j = 0; j < 3; j++){

            matriz[i][j] = valor;
            valor++;

        }
        
    }

    for(i = 0; i < 3; i++){
        
        total = total + matriz[i][i];
        
    }
    
    printf("\n%d", total);
    
    return 0;

}