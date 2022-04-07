#include <stdio.h>

int main(){

    int a, b, c, maior, meio,menor;

    printf("Digite um numero:");
    scanf(" %d", &a);

    printf("Digite outro numero:");
    scanf(" %d", &b);

    printf("Digite outro outro numero:");
    scanf(" %d", &c);

    if (a > b && a > c){
        maior = a;
        if (b > c) {
            meio = b;
            menor = c;
        }
        
        else {
            meio = c;
            menor = b;
        }

    } else if (b > a && b > c){
        maior = b;
        if (a > c) {
            meio = a;
            menor = c;
        }
        
        else {
            meio = c;
            menor = a;
        }

    } else {
        maior = c;
        if (a > b) {
            meio = a;
            menor = b;
        }
        
        else {
            meio = b;
            menor = a;
        }
    }

    printf ("Ordem Crescente: %d, %d, %d\n", menor, meio, maior);

    return 0;
}