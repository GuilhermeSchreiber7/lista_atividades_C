#include <stdio.h>
#include <stdlib.h>

int main(void){
    float N1, N2, N3, N4;
    float media;

    printf("nota do primeiro bimestre:");
    scanf("%f", &N1);
    printf("nota do segundo bimestre:");
    scanf("%f", &N2);
    printf("nota do terceiro bimestre:");
    scanf("%f", &N3);
    printf("nota do quarto bimestre:");
    scanf("%f", &N4);

    media = (N1 + N2 + N3 + N4) / 4;

    printf("media final: %.1f", media);

    return 0;
}