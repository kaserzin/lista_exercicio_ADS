//Escreva um programa que leia um número inteiro positivo N e informe todos os múltiplos de N que existem no intervalo entre 1 e 100.
#include <stdio.h>
#include <conio.h>
int main(){

    int num, K;
    printf("Informe um numero N: ");
    scanf("%d", &num);
    printf("Os mutiplos de %d entre 1 e 100 sao: \n", num);
    for(K=1; K<=100; K++){
        if (K <= 99){
            printf("%d, ", num * K);
        }else{
            printf("%d", num * K);
        }
        
    }

    getch(); return 0;
}