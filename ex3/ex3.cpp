#include <stdio.h>
#include <stdlib.h>

int main(void){
    float F, C;
    printf("digite quantos graus fahrenheit:");
    
    scanf("%f", &F);

    C = (F - 32) * 5 / 9;

    printf("em graus celcius: %.2f", C);
    return 0;
}