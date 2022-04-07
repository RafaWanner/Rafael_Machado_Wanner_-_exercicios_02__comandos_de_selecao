#include <stdio.h>

int main(){

    int x;

    printf("Digite um numero:");
    scanf(" %d", &x);

    if (x % 2 == 0) 
        printf("Seu Numero e Par\n");

    else
        printf("Seu Numero e Impar\n");

    return 0;
}