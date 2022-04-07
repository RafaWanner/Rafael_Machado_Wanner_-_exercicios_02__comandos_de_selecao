#include <stdio.h>

int main(){

    int x;

    printf("Digite um ano:");
    scanf(" %d", &x);

    if ((x % 4 == 0 && x % 100 != 0) || x % 400 == 0) 
        printf("%d e um ano bixesto\n", x);

    else
        printf("%d nao e um ano bixesto\n", x);

    return 0;
}