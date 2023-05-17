#include <stdio.h>

int main(){

    int verdadeiro = 1;

    while (verdadeiro){
        
        printf("\nEstrutura de Dados e a sua disciplina favorita(1 - sim, 0 - nao)?");
        scanf("%i", &verdadeiro);
        
        if (verdadeiro){
          
            printf("Estrutura de Dados e a sua disciplina favorita!");
       
        }

    }
    
    return 0;

}