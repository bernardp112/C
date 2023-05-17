#include <stdio.h>

int main(){

    float salario, aumento, final;

    scanf("%f", &salario);

    if (salario <= 1000){

        aumento = 0.15; 
        final = salario + (salario * aumento);
        
        printf("%f", final);

    }

    else if (1000 < salario <= 2000){
    
        aumento = 0.1;
        final = salario + (salario * aumento);
        
        printf("%f", final);

    }
 
    else if (2000 < salario){
    
        aumento = 0.1;
        final = salario + (salario * aumento);
        
        printf("%f", final);

    }

    return 0;
   
}