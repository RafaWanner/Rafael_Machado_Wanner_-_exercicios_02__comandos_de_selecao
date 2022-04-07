#include <stdio.h>

int main(){

    int a, b, c, d, maior;

    printf("Digite um numero:");
    scanf(" %d", &a);

    printf("Digite outro numero:");
    scanf(" %d", &b);

    printf("Digite outro outro numero:");
    scanf(" %d", &c);

    printf("Digite outro outro outro numero:");
    scanf(" %d", &d);

    if (a > b && a > c && a > d)
        maior = a;
    
    else if (b > a && b > c && b > d)
        maior = b;

    else if (c > a && c > b && c > d)
        maior = c;

    else
        maior = d;

    printf ("O Maior Numero e: %d\n", maior);

    return 0;
}