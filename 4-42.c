#include <stdio.h>

int ler_inteiros(int vet1[], int o){

    return vet1[o];

}

int imprime(int vet[], int m) {
    

    for(int i = 0; i < m; i++){
        
        printf("%d, ", ler_inteiros(vet, i));

    }
    
}

int main(){
    
    int n;
    printf("Tamanho do vetor: ");
    scanf("%d", &n);
    int vetor[n];

    for(int i = 0; i < n; i++){

        printf("Valor: ");
        scanf("%d", &vetor[i]);

    }

    imprime(vetor, n);

    return 0;

}

