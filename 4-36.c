#include <stdio.h>

int main(){

   int x;
   int y;

   printf("Insira todos os numeros: ");
   scanf("%f%f", &x, &y);

   if(&x > &y){

        printf("O maior endereco e x %d.\n", &x);

   }

   else if(&x > &y){

        printf("O maior endereco e y %d.\n", &y);

   }

   return 0; 

}