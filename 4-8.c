#include <stdio.h>

int main(){

    int a = 0, b = 1, c = 3;

    printf("%d", a && b);

    printf("%d", c > b || a < c);
    
    printf("%d", !b && c || a);

    printf("%d", a + b && c - 3 * b);
    
}