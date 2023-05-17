#include <stdio.h>

float areaCirculo(float x){

    float area;
    area = x * x * 3.14;
    return area;

}

int main(){

    float raio;
    scanf("%f", &raio);
    printf("A area do circulod de raio %f eh %f", raio, areaCirculo(raio));
    return 0;

}