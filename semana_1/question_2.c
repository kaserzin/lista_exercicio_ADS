// Escreva um programa que leia o valor da base e da altura de um triângulo e  calcule a  sua área
#include <stdio.h>

int main(){

    int base, altura;
    float area;

    printf("Informe a base do triangulo em cm: ");
    scanf("%dcm", &base);
    printf("Informe a altura do triangulo em cm: ");
    scanf("%dcm", &altura);

    area = (base * altura) / 2;

    printf("A base informada foi: %dcm\nA altura informada foi: %dcm\nA area do triangulo e: %.1fcm2", base,altura, area);

    return 0;
}