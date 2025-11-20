//Escreva um programa que leia um número inteiro positivo N e informe todos os termos dasérie de Fibonacci que são menores ou iguais a N.
#include <stdio.h>
#include <conio.h>

int main(){

    int termo1 = 1, termo2 = 1, termo3, n;

    printf("Informe o valor de N: ");
    scanf("%d", &n);

    printf("Os termos de fibonacci menores que %d sao: ",n);
    printf("%d, ", termo1);
    while(n > termo3){
        printf("%d, ", termo2);
        termo3 = termo1 + termo2;
        termo1 = termo2;
        termo2 = termo3;
    }

    getch(); return 0;
}