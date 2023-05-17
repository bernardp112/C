#include <stdio.h>

int main(){

   float x, y, media;

   scanf("%f%f", &x, &y);
   printf("O valor de x é %f e o de y é %f\n", x, y);

   media = (x + y)/2;

   printf("O valor calculado foi: %f\n", media);

   return 0;

}