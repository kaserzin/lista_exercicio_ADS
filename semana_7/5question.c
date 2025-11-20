//Escreva um programa que leia um número inteiro positivo N e imprima a maior quantidadepossível de números inteiros positivos de forma que a soma de todos os números impressosseja menor ou igual a N.
#include <stdio.h>
#include <conio.h>

int main(){

    int N, sum = 0, K;

    printf("Informe um valor: ");
    scanf("%d", &N);

    printf("Os numeros que somados nao dao N: ");
    for (K = 1; sum < N; K++){
        sum += K;
        if(sum < N){
            printf("%d ", K);
        }
    }



    getch(); return 0;
}