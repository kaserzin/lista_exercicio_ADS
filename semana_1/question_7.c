// Em uma determinada cidade, cada m2 de um terreno está avaliado em R$ 300,00.
// Escreva um programa que leia o comprimento e a largura de um terreno localizado
// nesta cidade e calcule o seu valor de mercado.
#include <stdio.h>

int main(){

    int largura, comprimeto;

    printf("Informe a largura do terreno: ");
    scanf("%d", &largura);
    printf("Informe o comprimento do terreno: ");
    scanf("%d", &comprimeto);

    printf("O terreno de %dm2 vale: R$ %d", largura * comprimeto, largura * comprimeto *300);

    return 0;
}