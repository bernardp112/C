#include <stdio.h>
#include <stdlib.h>

typedef struct reg_no {
struct reg_no *ante;
float info;
struct reg_no *prox;
} no;

typedef struct reg_lista {
struct reg_no *inicio;
struct reg_no *fim;
int quantidade;
} lista;

int estah_vazia (lista lista) {

    if (lista.quantidade == 0){

        return 1;

    }

    else{
        
        return 0;

    }

}

no *cria_no(float valor) {

    no *novo_no = (no *) malloc(sizeof(no));
    novo_no->ante = NULL;
    novo_no->info = valor;
    novo_no->prox = NULL;

    return novo_no;

}

lista insere_no_fim(lista lista, float valor) {

    no *novo_no = cria_no(valor);

    if (estah_vazia (lista)){

        lista.inicio = novo_no;
        lista.fim = novo_no;
        lista.quantidade += 1;

    } 
    
    else {

        no *no_atual = lista.fim;

        no_atual->prox = novo_no;
        novo_no->ante = no_atual;

        lista.fim = novo_no;
        lista.quantidade += 1;

    }

    return lista;

}

lista libera_lista(lista lista) {

    no *no_atual, *prox_no;
    no_atual = lista.inicio;

    while(no_atual != NULL){

        prox_no = no_atual->prox;
        no_atual->ante = NULL;
        no_atual->prox = NULL;
        free(no_atual);
        no_atual = prox_no;
        lista.quantidade -= 1;

    }

    lista.fim = NULL;
    lista.inicio = NULL;

    return lista;

}

void imprime_lista(lista lista) {

    no *no_atual;
    no_atual = lista.inicio;

    while (no_atual != NULL) {

        printf("%f\n", no_atual->info);        
        no_atual = no_atual->prox;
        
    }

}

void imprime_nos_reverso(lista lista) {

    no *no_atual;
    no_atual = lista.fim;

    while (no_atual != NULL) {

        printf("%f\n", no_atual->info);        
        no_atual = no_atual->ante;
        
    }

}

void busca_no(lista lista, float valor) {

    no *no_atual;
    no_atual = lista.inicio;
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

lista insere_no_inicio(lista lista, float valor) {

    no *novo_no = cria_no(valor);

    if (estah_vazia (lista)){

        lista.inicio = novo_no;
        lista.fim = novo_no;
        lista.quantidade += 1;

    } 
    
    else {

        no *no_atual = lista.inicio;
        
        novo_no->prox = lista.inicio;
        no_atual->ante = novo_no;

        lista.inicio = novo_no;
        lista.quantidade += 1;

    }

    return lista;

}

lista remove_no_valor(lista lista, float valor) {

    no *no_atual, *no_anterior, *no_ajudante;
    no_atual = lista.inicio;
    int total = 0;

    while (no_atual != NULL) {
        total += 1;

        if(no_atual->info == valor){

            if(total == 1){

                lista.inicio = no_atual->prox;
                no_atual = lista.inicio;
                no_atual->ante = NULL;
                lista.inicio = no_atual;

            }

            else{

                no_anterior->prox = no_atual->prox;
                no_ajudante = no_anterior->prox;
                no_ajudante->ante = no_anterior;

            }

            lista.quantidade -= 1;

        }        

        no_anterior = no_atual;
        no_atual = no_atual->prox;
      

    }

    return lista;

}

void verifica_valor_na_posicao(lista lista, int valor){

    no *no_atual;
    
    no_atual = lista.inicio;

    for(int i = 1; i < valor; i++){

        no_atual = no_atual->prox;

    }

    printf("O numero da posicao %d e: %f\n", valor, no_atual->info);

}

lista insere_no_posicao(lista lista, float valor, int posicao){

    no *no_atual, *no_anterior;
    no *novo_no = cria_no(valor);
    no_atual = lista.inicio;

    if (posicao == 1){

        no_atual->ante = novo_no;
        novo_no->prox = no_atual;
        lista.inicio = novo_no;

    }

    else{

        for(int i = 1; i < posicao; i++){

            no_anterior = no_atual;
            no_atual = no_atual->prox;

        }

        novo_no->prox = no_atual;
        no_anterior->prox = novo_no;
        no_atual->ante = novo_no;
        novo_no->ante = no_anterior;

    }

    lista.quantidade += 1;

    return lista;

}

lista remove_no_posicao(lista lista, int posicao){

    no *no_atual, *no_anterior, *no_ajudante;
    no_atual = lista.inicio;
    
    if(posicao == 1){

        lista.inicio = no_atual->prox;
        no_atual = lista.inicio;
        no_atual->ante = NULL;
        lista.inicio = no_atual;

    }

    else{
        
        for(int i = 1; i < posicao; i++){

            no_anterior = no_atual;
            no_atual = no_atual->prox;

        }

        no_anterior->prox = no_atual->prox;
        no_ajudante = no_anterior->prox;
        no_ajudante->ante = no_anterior;

    }

    lista.quantidade -= 1;
    
    return lista;

}

int main(){

    lista minha_lista_d;
    minha_lista_d.inicio = NULL;
    minha_lista_d.fim = NULL;
    minha_lista_d.quantidade = 0;

    printf("Verificando se esta vazia: \n");

    if(estah_vazia(minha_lista_d)==1){

        printf("A lista esta vazia\n");

    }

    else if(estah_vazia(minha_lista_d)==0){

        printf("A lista nao esta vazia\n");

    }
    
    minha_lista_d = insere_no_fim(minha_lista_d, 2);
    minha_lista_d = insere_no_fim(minha_lista_d, 3);
    minha_lista_d = insere_no_fim(minha_lista_d, 6); 
    minha_lista_d = insere_no_fim(minha_lista_d, 7);

    printf("Inserindo no fim: \n");

    if(estah_vazia(minha_lista_d)==1){

        printf("A lista esta vazia\n");

    }

    else if(estah_vazia(minha_lista_d)==0){

        printf("A lista nao esta vazia\n");

    }   

    imprime_lista(minha_lista_d);
    
    printf("O tamanho e %d\n", minha_lista_d.quantidade);  
    
    imprime_nos_reverso(minha_lista_d);

    printf("Removendo da posicao: \n");

    minha_lista_d = remove_no_posicao(minha_lista_d, 2);
    
    imprime_lista(minha_lista_d);
    
    printf("O tamanho e %d\n", minha_lista_d.quantidade);

    imprime_nos_reverso(minha_lista_d);

    printf("Inserindo na posicao: \n");

    minha_lista_d = insere_no_posicao(minha_lista_d, 8, 1);

    imprime_lista(minha_lista_d);

    verifica_valor_na_posicao(minha_lista_d, 1);

    imprime_nos_reverso(minha_lista_d);

    busca_no(minha_lista_d, 8);

    printf("Removendo valor: \n");

    minha_lista_d = remove_no_valor(minha_lista_d, 2); // se o numero que for removido estiver junto de outro igual não sera removido o segundo, não consegue remover o fim

    imprime_lista(minha_lista_d);

    imprime_nos_reverso(minha_lista_d);

    printf("Inserindo no inicio: \n");

    minha_lista_d = insere_no_inicio(minha_lista_d, 9);

    imprime_lista(minha_lista_d); 

    imprime_nos_reverso(minha_lista_d);

    printf("Liberando lista: \n");

    minha_lista_d = libera_lista(minha_lista_d);

    printf("O tamanho e %d\n", minha_lista_d.quantidade);  
    
    return 0;

}