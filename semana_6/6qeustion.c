//Escreva um programa que leia um número inteiro N e imprima a figura abaixo,
#include <stdio.h>
#include <conio.h>

int main(){

    int N, K, I;
    printf("Informe N: ");
    scanf("%d", &N);

    for(K=1; K <= N; K++){
        for (I = 1; I <= K; I++){
            printf("*");
        }
        printf("\n");
    }

    getch(); return 0;
}