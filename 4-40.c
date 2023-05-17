#include <stdio.h>

int main(){
    
    int i = 0, total;

    total = ler_inteiros(i);
    total += ler_reais(i);

    printf("%d", total);

    return 0;

}

int ler_inteiros(int inicio){
    
    int inteiro, vetorInt[100];

    printf("Inteiros: ");

    do{

        scanf("%d", &inteiro);

        if (inteiro != -1){

            vetorInt[inicio] = inteiro;
            inicio++;

        }

    }while(inteiro != -1);

    return inicio;

}

int ler_reais(int inicio){
    
    float real, vetorReal[100];

    printf("Reais: ");

    do{

        scanf("%f", &real);

        if (real != -1){

            vetorReal[inicio] = real;
            inicio++;

        }

    }while(real != -1);

    return inicio;

} 