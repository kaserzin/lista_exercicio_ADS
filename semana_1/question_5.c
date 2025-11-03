
// Escreva um programa que leia um valor em polegadas e o converta para centímetros, 
// considerando que uma polegada equivale a 2.54 cm.
#include <stdio.h>

int main(){

    float polegadas, centimetros;

    printf("Informe um valor em polegadas: ");
    scanf("%f", &polegadas);
    
    centimetros = polegadas * 2.54;

    printf("%.1f polegas em centimentro fica: %.1f", polegadas, centimetros);

    return 0;
}
