#include <stdio.h>
#include <stdlib.h>

int main(void){
   int num1, num2;
   float num3;
   float A, B, C;

   printf("digite o primeiro numero inteiro:");  
   scanf("%i", &num1);
   printf("digite o segundo numero inteiro:");
   scanf("%i", &num2);
   printf("digite um numero real:"); 
   scanf("%f", &num3); 

   A = (num1 * 2) * (num2 / 2);

   printf("o produto deu: %i", A);

   B = (num1 * 3) + num3;

   
   C = num3 * num3 * num3;
   

   return 0;
}