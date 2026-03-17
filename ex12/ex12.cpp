#include <stdio.h>
#include <stdlib.h>

int main(void){
    float salario, descontos;

    printf("digite o salario bruto:");
    scanf("%f", &salario);

    descontos = (salario * 0.15) + (salario * 0.11) + (salario * 0.03);

    printf("o salario liquido %.2f", salario - descontos);
}