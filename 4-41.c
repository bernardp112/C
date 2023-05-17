#include <stdio.h>

float ler_reais(float vet[], int o) {
    
    float media, soma = 0;
    int i;

    for(i = 0; i < o; i++){
        
        soma += vet[i];
    
    }

    return soma;

}

void media(float val, int m){

    float media;

    media = val/m;

    printf("%f", media);

}

int main(){
    
    int n;
    printf("Tamanho do vetor: ");
    scanf("%d", &n);
    float vetor[n], valores;
    
    for(int i = 0; i < n; i++){

        printf("Valor: ");
        scanf("%f", &vetor[i]);

    }

    valores = ler_reais(vetor, n);

    media(valores, n);

    return 0;

}