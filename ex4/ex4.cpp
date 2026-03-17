#include <stdio.h>
#include <stdlib.h>

int main(void){
    float C, F;
    printf("digite quantos graus celcius:");
    
    scanf("%f", &C);

    F = (C * 9 / 5) + 32;

    printf("em graus fahreinheit: %.2f", F);
    return 0;
}