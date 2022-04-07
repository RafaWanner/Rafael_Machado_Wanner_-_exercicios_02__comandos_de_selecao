#include <stdio.h>

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_RESET   "\x1b[0m"

int main(){

    float a, b, c, media;
    char conceito;

    printf("Escolha um Numero: ");
    scanf(" %f", &a);

    printf("Escolha outro Numero: ");
    scanf(" %f", &b);

    printf("Escolha outro outro Numero: ");
    scanf(" %f", &c);

    media = (a + b + c) / 3;

    if ((a > 10 || a < 0) || (b > 10 || b < 0) || (c > 10 || c < 0))
        printf(ANSI_COLOR_RED "ERROR - Numero Incompativel - ERROR" ANSI_COLOR_RESET "\n");

    else { 
        if (media >= 8.5)
            conceito = 'A';

        else if (media > 7)
            conceito = 'B'; 

        else if (media > 5.5)
            conceito = 'C';

        else
            conceito = 'F';

        printf("Media: %.2f \nConceito %c\n", media, conceito);
    }

    return 0;
}