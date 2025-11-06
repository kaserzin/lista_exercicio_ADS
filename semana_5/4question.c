//Escreva um programa que leia o termo inicial e a razão de uma progressão aritmética e um número inteiro positivo N e imprima os N primeiros termos da progressão.
#include <stdio.h>
#include <conio.h>

int main(){

    int termo_inicial, razao, N, K,termo_atual;

    printf("Informe o termo inicial e a razao da PA: ");
    scanf("%d%d", &termo_inicial, &razao);
    printf("Informe quantos termos voce quer: ");
    scanf("%d", &N);
    termo_atual = termo_inicial;
    printf("Os %d termos da PA sao: \n", N);
    for(K=1;K<=N;K++){

        printf("%d ",termo_atual);
        termo_atual += razao;

    }

    getch();
    return 0;
}