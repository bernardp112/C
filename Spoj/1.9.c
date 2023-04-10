#include <stdio.h>

int main()
{

    int alunos, i, j, valor, total1 = 0, totalFinal = 0, valorf = 0, vetorFinal[100];

    do {
        
        scanf("\n%d", &alunos);

        int matriz[alunos][alunos];
            
        for(i = 0; i < alunos; i++){

            for(j = 0; j < alunos; j++){

                scanf("%d", &valor);

                matriz[i][j] = valor; 

            }
        
        }

        for(j = 0; j < alunos; j++){

            for(i = 0; i < alunos; i++){

                if(matriz[i][j] == 1){

                    total1++;

                }

            }

            if (total1 > totalFinal){

                totalFinal = total1;

            }

            total1 = 0;
        
        }
        
        if(alunos != 0){
            
            for(i = valorf; i < 100; i ++){

                vetorFinal[i] = totalFinal;

            }
            
            valorf++;
            totalFinal = 0;

        }
    
    }while(alunos != 0);

    for(i = 0; i < valorf; i++){

        printf("%d\n", vetorFinal[i]);

    }
        
    return 0;

}