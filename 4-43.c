#include <stdio.h>

int inserir(int vet[], int m){

    int i, p, q;

    printf("Posicao a ser inserida: ");
    scanf("%d", &p);

    printf("Numero a ser inserido: ");
    scanf("%d", &q);
    
    for(i = m - 1; i >= p; i--){

        vet[i+1] = vet[i];

    }

    vet[p] = q;

    for(i = 0; i < m + 1; i++){

        printf("%d", vet[i]);

    }

}

int remover(int vet[], int m){

    int i, p;

    printf("Posicao a ser removida: ");
    scanf("%d", &p);
    
    for(i = p; i < m - 1; i++){

        vet[i] = vet[i + 1];

    }

    for(i = 0; i < m - 1; i++){

        printf("%d", vet[i]);

    }

}

int atualizar(int vet[], int m){

    int i, p, q;

    printf("Posicao a ser atualizada: ");
    scanf("%d", &p);

    printf("Numero a ser atualizado: ");
    scanf("%d", &q);

    vet[p] = q;

    for(i = 0; i < m; i++){

        printf("%d", vet[i]);

    }

}

int main(){

    int i, n, op;
    
    printf("Tamanho: ");
    scanf("%d", &n);
    
    int lista[n];

    for(i = 0; i < n; i++){

        printf("Valor: ");
        scanf("%d", &lista[i]);

    }

    do{
    
        printf("\nSelecione a operacao(1 - inserir, 2 - remover, 3 - atualizar): ");
        scanf("%d", &op);

        switch (op){ 

            case 0:

                printf("Ate logo!!!");
                
                break;

            case 1:
        
                inserir(lista, n);

                n += 1;

                break;
    
            case 2:
        
                remover(lista, n);

                n -= 1;

                break;
    
            case 3:
        
                atualizar(lista, n);

                break;
    
            default:
        
                printf("Operacao invalida!!\n");

                break;

        }

    }while(op != 0);

}