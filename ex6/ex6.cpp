#include <stdio.h>
#include <stdlib.h>

int main(void){
    float R, A;

    printf("raio do circulo:");

    scanf("%f", &R);

    A = 3.14 * (R * R);

    printf("area do circulo %.2f cm", A);
    
    return 0;

}