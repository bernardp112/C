#include <stdio.h>

int main(){

   float altura, massa, imc;

   printf("\aInsira sua altura e massa para o cálculo do imc \n");
   scanf("%f%f", &altura, &massa);

   imc = massa / (altura*altura);

   printf("Seu IMC é %f\n", imc);

   return 0;

}