#include <stdio.h>

int main(){

   float x;
   float y;
   float z;
   float media; 

   printf("Insira todos os números: ");
   scanf("%f%f%f", &x, &y, &z);

   printf("Os valores recebidos foram %f e %f e %f.\n", x, y, z);
   
   media = (x+y+z)/3;
   
   printf("O valor calculado foi: %f", media);

   return 0; 

}