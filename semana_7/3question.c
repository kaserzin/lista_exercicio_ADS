//Escreva um programa que leia um número inteiro positivo N e informe o primeiro termo dasérie de Fibonacci que é maior do que N.
#include <stdio.h>
#include <conio.h>

int main(){

    int termo1 = 1, termo2 = 1, termo3, n;

    printf("Informe o valor de N: ");
    scanf("%d", &n);

    printf("O primeiro termo de fibonacci que e maior que %d e: ",n);
    while(n >= termo3){
        termo3 = termo1 + termo2;
        termo1 = termo2;
        termo2 = termo3;
    }
    printf("%d",termo3);

    getch(); return 0;
}