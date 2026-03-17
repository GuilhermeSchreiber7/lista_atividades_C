#include <stdio.h>
#include <stdlib.h>

int main(void){
    float ganho;
    int hrs;
    float salario;

    printf("quantas horas voce trabalha?");
    scanf("%i", &hrs);
    printf("quanto voce ganha por hora trabalhada?");
    scanf("%f", &ganho);

    salario = (ganho * hrs) * 20;

    printf("seu salario final: %.2f", salario );
    return 0;
}