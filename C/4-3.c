#include <stdio.h>

int main(){

   int x, y;

   scanf("%d%d", &x, &y);
   printf("O quociente da divisão de %d por %d é: %d\n", x, y, x/y);
   printf("O resto da divisão de %d por %d é: %d\n", x, y, x%y);

   return 0;

}