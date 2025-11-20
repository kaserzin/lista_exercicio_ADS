// Escreva um programa que leia dois números inteiros positivos M e N e imprima todos ostermos da série de Fibonacci que pertencem ao intervalo [M, N].
#include <stdio.h>
#include <conio.h>

int main(){

    int termo1 = 1, termo2 = 1, termo3, n,m;

    printf("Informe o valor de M e N: ");
    scanf("%d%d", &m, &n);

    printf("O termos de fibonacci que estao entre %d e %d e: ", m ,n);
    while(n >= termo3){
        termo3 = termo1 + termo2;
        termo1 = termo2;
        termo2 = termo3;
        if(termo1 > m && termo1 < n){
            printf("%d ", termo1);
        }
    }
    getch(); return 0;
}