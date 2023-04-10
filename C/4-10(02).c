#include <stdio.h>

int main(){

    int verdadeiro = 1;

    do{
        
        printf("\nEstrutura de Dados e a sua disciplina favorita(1 - sim, 0 - nao)?");
        scanf("%i", &verdadeiro);
        
        if (verdadeiro){
          
            printf("Estrutura de Dados e a sua disciplina favorita!");
       
        }

    }while (verdadeiro);
    
    return 0;

}