#include <stdio.h>
#include <string.h>

typedef char texto[255];

typedef struct reg_dados {

    texto nome;
    texto cpf;

} Pessoa;

typedef struct reg_endereco{

    texto logradouro;
    int numero;
    texto bairro;
    texto cidade;
    texto estado;

} PessoaEnd;

int main(){

    Pessoa pessoa1;
    PessoaEnd pessoa2;

    printf("Nome: \n");
    scanf("%[^\n]s", &pessoa1.nome);
    printf("CPF: \n");
    scanf("%s", &pessoa1.cpf);
    printf("Logradouro: \n");
    scanf("%s", &pessoa2.logradouro);
    printf("Numero: \n");
    scanf("%d", &pessoa2.numero);
    printf("Bairro: \n");
    scanf("%s", &pessoa2.bairro);
    printf("Cidade: \n");
    scanf("%s", &pessoa2.cidade);
    printf("Estado: \n");
    scanf("%s", &pessoa2.estado);


    printf("Nome: %s\n", pessoa1.nome);
    printf("CPF: %s\n", pessoa1.cpf);
    printf("Logradouro: %s\n", pessoa2.logradouro);
    printf("Numero: %d\n", pessoa2.numero);
    printf("Bairro: %s\n", pessoa2.bairro);
    printf("Cidade: %s\n", pessoa2.cidade);
    printf("Estado: %s\n", pessoa2.estado);

    return 0;

}