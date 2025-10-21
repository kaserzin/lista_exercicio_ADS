// Escreva um programa que leia o valor do seno de um ângulo e calcule o valor do seu
// cosseno.
#include <stdio.h>
#include <math.h>

int main(){

    float seno;
    printf("Informe o valor do seno: ");
    scanf("%f", &seno);

    printf("Como seno vale %.1f o cosseno vale %.1f",seno, sqrt(1-seno*seno));

    return 0;
}