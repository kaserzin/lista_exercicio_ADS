//Escreva um programa que leia dois números inteiros M e N e imprima todos os pares
#include <stdio.h>
#include <conio.h>

int main(){

    int M, N, Y, X;

    printf("Digite o valor de M e N: ");
    scanf("%d%d", &M, &N);

    for(X = M; X < N; X++){
        for(Y = M; Y <= N; Y++){
            printf("(%d,%d), ", X, Y);
        }
    }

    getch(); return 0;
}