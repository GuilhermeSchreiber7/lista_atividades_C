#include <stdio.h>
#include <stdlib.h>

int main(void){
    float M, CM;

    printf("digite o valor em metros:");

    scanf("%f", &M);

    CM = M * 100;

    printf("o seu valor em centimetros %.2fcm", CM);
    return 0; 
}