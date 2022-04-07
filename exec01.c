#include <stdio.h>

int main(){

    int x;

    printf("Digite um numero:");
    scanf(" %d", &x);

    if (x < 0) 
        x = x * -1;

    printf("Modulo do seu numero: %d\n", x);

    return 0;
}