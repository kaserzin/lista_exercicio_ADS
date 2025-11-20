//Escreva um programa que leia um número inteiro N e imprima os N primeiros termos da Fibonacci.
#include <stdio.h>
#include <conio.h>

int main(){

    int termo1 = 1,termo2 = 2 , termo3, N;

    printf("Digite o valor de N: ");
    scanf("%d", &N);

    printf("Os %d da fibonacci sao: ", N);
    printf("1 ");
    while (N > 1){
        printf("%d ", termo1);
        termo3 = termo1 + termo2;
        termo1 = termo2;
        termo2 = termo3;
        N -= 1;
    }
    

    getch(); return 0;
}