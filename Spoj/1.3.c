#include <stdio.h>

int main(){

    int N;

    scanf("%d", &N);

    if (N == 0){
        
        printf("E");

    }

    else if (1 <= N && N <= 35){
        
        printf("D");

    }
 
    else if (36 <= N && N <= 60){
        
        printf("C");

    }

    else if (61 <= N && N <= 85){
        
        printf("B");

    }

    else if (86 <= N && N <= 100){
        
        printf("A");

    }

    return 0;
   
}