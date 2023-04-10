#include <stdio.h>
#include <string.h>

int main(){
   
    char texto[50], *txt;

    while (scanf("%s", &texto) != EOF){
        
        txt = texto;
        int tam = strlen(txt), x = 0;

        while(x < tam){

            if(*txt == 'A' || *txt == 'B' || *txt == 'C')
                printf("2");
            else if(*txt == 'D' || *txt == 'E' || *txt == 'F')
                printf("3");
            else if(*txt == 'G' || *txt == 'H' || *txt == 'I')
                printf("4");
            else if(*txt == 'J' || *txt == 'K' || *txt == 'L')
                printf("5");
            else if(*txt == 'M' || *txt == 'N' || *txt == 'O')
                printf("6");
            else if(*txt == 'P' || *txt == 'Q' || *txt == 'R' || *txt == 'S')
                printf("7");
            else if(*txt == 'T' || *txt == 'U' || *txt == 'V')
                printf("8");
            else if(*txt == 'W' || *txt == 'X' || *txt == 'Y' || *txt == 'Z')
                printf("9");
            else
                printf("%c", *txt);   

            ++txt, ++x;

        }

        printf("\n");

    }
   
    return 0;

}