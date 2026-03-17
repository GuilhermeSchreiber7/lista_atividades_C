#include <stdio.h>
#include <stdlib.h>

int main(void){
    int dias, salario;

    printf("quantos dias o encanador trabalhou?");
    scanf("%i", &dias);

    salario = (dias * 25) - (dias * 25 * 0.08);

    printf("o salario liquido: %i", salario);
    return 0;
}