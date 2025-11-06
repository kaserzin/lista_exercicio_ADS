// Escreva um programa que leia dois números inteiros M e N e calcule a soma de todos os números do intervalo [M, N].
#include <stdio.h>
#include <conio.h>

int main(){

    int K, M, N, soma = 0;

    printf("Informe M e N: ");
    scanf("%d%d", &M, &N);

    for (K = M; K <= N; K++){
        soma += K;
    }
    printf("A soma de todos os numeros entre %d e %d eh %d.\n",M,N,soma);


    getch();
    return 0;
}