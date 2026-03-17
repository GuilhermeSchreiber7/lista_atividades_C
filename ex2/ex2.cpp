#include <stdio.h>
#include <stdlib.h>

void createcard(char separator){
    for (int i = 0; i < 23; i++){
        printf("%c", separator);
    }
    printf("\n");
}

int main(void)
{
    char name[50] = "Luan";
    int age = 18;
    float height = 1.70;
    char sex[2] = "M";

    createcard('-');
    printf("| Nome: %s          |\n", name);
    printf("| Idade: %i           |\n", age);
    printf("| Altura: %.2f        |\n", height);
    printf("| Sexo: %s             |\n", sex);
    createcard('-');

    return 0;
}