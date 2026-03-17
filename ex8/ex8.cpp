#include <stdio.h>
#include <stdlib.h>

int main(void){
    float num1, num2;
    float soma;

    printf("digite o numero 1: ");
    scanf("%f", &num1);

    printf("digite o numero 2: ");
    scanf("%f", &num2);

    soma = num1 + num2;

    printf("a soma %.1f\n", soma);

    return 0;
}