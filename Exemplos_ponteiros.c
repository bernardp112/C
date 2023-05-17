#include <stdio.h>

int main(){

    int a = 5;
    int *p;
    p = &a;

    printf("o valor armazenado na posição que p aponta eh: %d\n", *p);
    printf("o valor armazenado dentro de p eh: %x\n", p);
    printf("o valor da posicao de memoria de a eh: %x\n", &a);
    printf("o valor da posicao de memoria de p eh: %x\n", &p);

    return 0;

}