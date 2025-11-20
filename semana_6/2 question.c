// Escreva um programa que leia dois números inteiros M e N e calcule o valor de MN
#include <stdio.h>
#include <conio.h>

int main(){

    int M, N, K;
    int resultado = 1;

    printf("Digite o valor de M e N: ");
    scanf("%d%d", &M, &N);

    for(K = 0; K < N; K++) {
        resultado *= M;
    }

    printf("O resultado de %d elevado a %d é: %d\n", M, N, resultado);

    getch(); return 0;
}