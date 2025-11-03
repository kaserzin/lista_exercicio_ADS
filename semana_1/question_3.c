// Escreva um programa que leia o valor de uma temperatura em Celsius e calcule o seu   valor correspondente em Fahrenheit e em Kelvin.
#include <stdio.h>

int main(){

    float celsius, fahrenheit, kelvin;

    printf("Informe a temperatura em graus celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 1.8) + 32;
    kelvin = celsius + 273.15;

    printf("A temperatura em celsius e: %.1fC\nA temperatura em fahrenheit e: %.1fF\nA temperatura me kelvin e: %.2fK", celsius, fahrenheit, kelvin);
    
    return 0;
}