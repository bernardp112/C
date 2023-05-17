#include <stdio.h>

int main(){

    int verdadeiro = 1, i;

    printf("\nQuantas vezes deve ser repetida a frase?");
    scanf("%d", &i);

    for(verdadeiro; verdadeiro <= i; verdadeiro ++){
          
        printf("Estrutura de Dados e a sua disciplina favorita!\n");

    }
    
    return 0;

}