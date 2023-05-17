#include <stdio.h>

int main()
{
    
    int matriz[3][3];

    int i, j;

    printf("Insira os numeros: \n");

    for(i = 0; i < 3; i++){

        for(j = 0; j < 3; j++){
                       
            
            scanf("%d", &matriz[i][j]);

        }

    }

    for(i = 0; i < 3; i++){

        for(j = 0; j < 3; j++){
            
            printf("O endereco da linha %d coluna %d e %d\n", i, j, &matriz[i][j]);

        }
        
    }

    return 0;

}