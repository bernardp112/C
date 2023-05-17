#include <stdio.h>
#include <stdlib.h>
 
typedef struct reg_no {

    float info;
    struct reg_no *prox;

} no;

int estah_vazia (no *lista) {

    if (lista == NULL)
        return 1;

    else return 0;

}

no *cria_no(float valor) {

    no *novo_no = (no *) malloc(sizeof(no));
    novo_no->info = valor;
    novo_no->prox = NULL;

    return novo_no;

}

no *insere_no_fim(no *lista, float valor) {

    no *novo_no = cria_no(valor);

    if (estah_vazia (lista)){

        lista = novo_no;

    } 
    
    else {

        no *no_atual = lista;

        while (no_atual->prox != NULL) {

            no_atual = no_atual->prox;

        }

        no_atual->prox = novo_no;

    }

    return lista;

}

void libera_lista(no *lista) {

    no *no_atual, *prox_no;
    no_atual = lista;

    while (no_atual != NULL) {

        prox_no = no_atual->prox;
        free(no_atual);
        no_atual = prox_no;

    }

}

void imprime_lista(no *lista) {

    no *no_atual;
    no_atual = lista;

    while (no_atual != NULL) {

        printf("%f\n", no_atual->info);        
        no_atual = no_atual->prox;

    }

}

void tamanho(no *lista) {

    no *no_atual;
    int total = 0;
    no_atual = lista;

    while (no_atual != NULL) {

        total += 1;        
        no_atual = no_atual->prox;

    }

    printf("O tamanho da lista e: %d\n", total);

}

void busca_no(no *lista, float valor) {

    no *no_atual;
    no_atual = lista;
    int total = 0;

    while (no_atual != NULL) {

        if(no_atual->info == valor){

            total++;

        }        
        no_atual = no_atual->prox;

    }

    if(total != 0){

        printf("Esta na lista\n");

    }

    else if(total == 0){

        printf("Nao esta na lista\n");

    }

}

no *insere_no_inicio(no *lista, float valor) {

    no *novo_no = cria_no(valor);
    novo_no->prox = lista;
    lista = novo_no;

    return lista;

}

no *remove_no_valor(no *lista, float valor) {

    no *no_atual, *no_anterior;
    no_atual = lista;
    int total = 0;

    while (no_atual != NULL) {
        total += 1;

        if(no_atual->info == valor){

            if(total == 1){

                lista = no_atual->prox;

            }

            else{

                no_anterior->prox = no_atual->prox;

            }

        }        

        no_anterior = no_atual;
        no_atual = no_atual->prox;

    }

    return lista;

}

void verifica_valor_na_posicao(no *lista, int valor){

    no *no_atual;
    
    no_atual = lista;

    for(int i = 1; i < valor; i++){

        no_atual = no_atual->prox;

    }

    printf("O numero da posicao %d e: %f", valor, no_atual->info);

}

no *insere_no_posicao(no *lista, float valor, int posicao){

    no *no_atual, *no_anterior;
    no *novo_no = cria_no(valor);
    no_atual = lista;

    for(int i = 1; i < posicao; i++){

        no_anterior = no_atual;
        no_atual = no_atual->prox;

    }

    novo_no->prox = no_atual;
    no_anterior->prox = novo_no;

    return lista;

}

no *remove_no_posicao(no *lista, int posicao){

    no *no_atual, *no_anterior;
    no_atual = lista;

    for(int i = 1; i < posicao; i++){

        no_anterior = no_atual;
        no_atual = no_atual->prox;

    }

    if(posicao == 1){

        lista = no_atual->prox;

    }

    else{

        no_anterior->prox = no_atual->prox;

    }
    
    return lista;

}

int main(){

    no *minha_lista = NULL;

    if(estah_vazia(minha_lista)==1){

        printf("A lista esta vazia\n");

    }

    else if(estah_vazia(minha_lista)==0){

        printf("A lista nao esta vazia\n");

    }
    
    minha_lista = insere_no_fim(minha_lista, 2);
    minha_lista = insere_no_fim(minha_lista, 3);
    minha_lista = insere_no_fim(minha_lista, 6);    
    minha_lista = insere_no_inicio(minha_lista, 1);
    minha_lista = insere_no_fim(minha_lista, 7);
    minha_lista = insere_no_inicio(minha_lista, 5);
    minha_lista = remove_no_valor(minha_lista, 3);
    minha_lista = remove_no_valor(minha_lista, 5);
    minha_lista = insere_no_posicao(minha_lista, 8, 2);
    minha_lista = remove_no_posicao(minha_lista, 3);
    minha_lista = remove_no_posicao(minha_lista, 1);

    imprime_lista(minha_lista);
    tamanho(minha_lista);
    busca_no(minha_lista, 6);
    busca_no(minha_lista, 1);
    verifica_valor_na_posicao(minha_lista, 3);

    return 0;

}
