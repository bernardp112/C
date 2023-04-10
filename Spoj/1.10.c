#include <stdio.h>

int main(){
   
    int inteiros, i, k = 1;
    
    while (scanf("%d", &inteiros) != EOF){
        
        int vetor[inteiros], a = 0, soma = 0;
        
        if(inteiros == 1){
            
            scanf("%d", &soma);
            printf("Instancia %d\n%d\n\n", k++, soma);

        }
        
        else{
            
            for(i = 0; i < inteiros; i++){

                scanf("%d", &vetor[i]);
            
            }

            while(a < inteiros){

                soma += vetor[a];

                if(soma == vetor[a + 1]){

                    a = inteiros + 1;

                }

                else{

                    a++;

                }

            }

            if(a == inteiros + 1){

                printf("Instancia %d\n%d\n\n", k++, soma);

            }

            else{

                printf("Instancia %d\nnao achei\n\n", k++);

            } 

        }

    }
   
    return 0;

}