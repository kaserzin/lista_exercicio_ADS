// Escreva um programa que leia o termo inicial e a razão de uma progressão aritmética e
// imprima os 5 primeiros termos desta progressão.
#include <stdio.h>

int main(){

    int razao, termo_inicial;

    printf("Informe o termo incial da PA: ");
    scanf("%d", &termo_inicial);
    printf("Informe a razao da PA: ");
    scanf("%d", &razao);

    printf("O 1 termo e: %d\nO 2 termo e: %d\nO 3 termo e: %d\nO 4 termo e: %d\nO 5 termo e: %d",termo_inicial, termo_inicial +razao, termo_inicial + (razao*2), termo_inicial+razao*3, termo_inicial+razao*4);

    return 0;
}