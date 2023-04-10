#include <stdio.h>

int main()
{
    
    int matriz[4][3];

    int i, j, valor = 0, total = 0;
    
    for(i = 0; i < 4; i++){

        for(j = 0; j < 3; j++){

            matriz[i][j] = valor;
            total = total + matriz[i][j];
            valor++;
            
        }

    }
    
    printf("%d", total);
    return 0;

}