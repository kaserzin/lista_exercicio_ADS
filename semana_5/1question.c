// Escreva um programa que leia um número inteiro positivo N e imprima os N primeiros números ímpares positivos.
#include <stdio.h>
#include <conio.h>

int main(){

    int N, i;

    printf("Informe N: ");
    scanf("%d", &N);

    for(i=1; i <= N; i++){
        
        if (i % 2 == 1){
            printf("%d ", i);
        }
    }

    getch();
    return 0;
}