// Escreva um programa que leia os valores de dois ângulos internos de um triângulo e 
// calcule o valor do terceiro ângulo.
#include <stdio.h>

int main(){

    int angulo1, angulo2,angulo3;

    printf("Informe o primeiro angulo do triangulo: ");
    scanf("%d", &angulo1);
    printf("Informe o segundo angulo do triangulo: ");
    scanf("%d", &angulo2);

    angulo3 = 180 - (angulo1 + angulo2);

    if (angulo3 <= 0){

        printf("Valor invalido!");
    }
    else{
        printf("O angulo 3 vale: %d", angulo3);
    }

    return 0;
}