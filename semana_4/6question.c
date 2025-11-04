//Escreva um programa que leia um valor inteiro a ser sacado pelo usuário e identifique quantas cédulas de cada tipo
#include <stdio.h>
#include <conio.h>

int main(){

    int count_100, count_50, count_20, count_10, saque;

    printf("Informe quanto quer sacar: ");
    scanf("%d", &saque);

    count_100 = saque / 100;
    count_50 = (saque % 100 ) / 50;
    count_20 = (saque % 50) / 20;
    count_10 = (saque % 20) / 10;

    printf("Para sacar R$%d.\nNotas de 100: %d.\nNotas de 50: %d.\nNotas de 20: %d.\nNotas de 10: %d.\n",saque,count_100,count_50,count_20,count_10);


    getch();
    return 0;
}