#include <stdio.h>
int main(){
    int A, N, inicio = 1, F, total, totalf = 0;
    scanf("%d%d", &A, &N);
    for(; inicio <= N; inicio ++){
        scanf("%d", &F);
        total = (A * F) / 40000000;
        if (total >= 1){
            totalf = totalf + 1;
        }   
    }
    printf("%d", totalf);
    return 0;
}