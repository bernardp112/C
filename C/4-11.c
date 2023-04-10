#include <stdio.h>

int main(){

    int fatorial,fatores = 1, total = 1;

    printf("\nnumero para fatorial?");
    scanf("%d", &fatorial);

    if (fatorial == 0 || fatorial == 1){

        printf("\n O total deu: 0");

    }

    else{
       
        for(fatores; fatores <= fatorial; fatores ++){
          
            total = total * fatores;
       
        }
       
        printf("\n O total deu: %d", total);

    }
    
    return 0;

}