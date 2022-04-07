#include <stdio.h>

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_RESET   "\x1b[0m"

int main(){

    int x;

    printf("Digite um numero entre 0 e 9:");
    scanf(" %d", &x);

    switch(x){
        case 0:
            printf("Zero\n");
            break;
        
        case 1:
            printf("Um\n");
            break;

        case 2:
            printf("Dois\n");
            break;
        
        case 3:
            printf("Tres\n");
            break;

        case 4:
            printf("Quatro\n");
            break;
        
        case 5:
            printf("Cinco\n");
            break;

        case 6:
            printf("Seis\n");
            break;
        
        case 7:
            printf("Sete\n");
            break;

        case 8:
            printf("Oito\n");
            break;
        
        case 9:
            printf("Nove\n");
            break;

        default:
            printf(ANSI_COLOR_RED "ERROR - Numero Incompativel - ERROR" ANSI_COLOR_RESET "\n");
            break;
    }

    return 0;
}