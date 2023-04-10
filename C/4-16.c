#include <stdio.h>

int main(){
   
    int inicio;

    int notas[10];

    for(inicio = 0; inicio < 10; inicio ++){
        
        scanf("%d", &notas[inicio]);
        
    }
    
    for(inicio = 9; inicio >= 0; inicio --){

        printf("notas = %d\n", notas[inicio]);

    }
   
    return 0;

}