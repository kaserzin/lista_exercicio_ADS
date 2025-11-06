//Escreva um programa que leia um número inteiro N e imprima todos os seus divisores exatos.
#include <stdio.h>
#include <conio.h>

int main(){

    int num, K;

    printf("Informe um numero: ");
    scanf("%d", &num);

    printf("Os divisores de %d sao: \n", num);
    for(K=1; K<= num; K++){
        if (num % K == 0){
            printf("%d ",K);
        }
    }

    getch();
    return 0;
}