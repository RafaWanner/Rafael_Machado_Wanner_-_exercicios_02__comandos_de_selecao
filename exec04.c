#include <stdio.h>

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_RESET   "\x1b[0m"

int main(){

    int x,y;

    printf("Digite um Numero Inteiro:");
    scanf(" %d", &x);

    printf("Digite Outro Numero Inteiro:");
    scanf(" %d", &y);

    if (x < 0 || y < 0) 
        printf(ANSI_COLOR_RED "ERROR - Numero Incompativel - ERROR" ANSI_COLOR_RESET "\n");

    else if (x > y)
        printf("%d e maior que %d\n", x, y);

    else if (x < y)
        printf("%d e maior que %d\n", y, x);

    else
        printf("%d e igual a %d\n", x, y);

    return 0;
}