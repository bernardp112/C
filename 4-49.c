#include <stdio.h>

typedef char texto[255];
typedef unsigned int natural;

int main()
{
    
    texto nome;
    natural idade;

    scanf("%[^\n]s", &nome);
    scanf("%u", &idade);

    printf("O nome e: %s\n", nome);
    printf("A idade e: %u\n", idade);

    return 0;
}
