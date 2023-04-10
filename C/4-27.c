#include <stdio.h>

int main()
{
    
    char numero32 [3] = "42";
    char numero320 [3] = "320";

    printf("%d", strcmp(numero32, numero320));

    char nome[6];

    scanf("%s", &nome);
    printf("%s", nome);
    
    for(int i = 0; i < 5; i++){

        printf("\n%c-", nome[i]);

    }

    return 0;
}
