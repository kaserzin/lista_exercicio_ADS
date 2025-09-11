// 1. Escreva um programa que leia dois números inteiros M e N e 
//    verifique se N é múltiplo  de M. 
#include <stdio.h>


int main(){
    int m, n;
    printf("Escreva o valor de M: ");
    scanf("%d", &m);
    printf("\nEscreva o valor de N: ");
    scanf("%d", &n);

    if (m % n == 0){
        printf("%d e multiplo de %d",n, m);
    }
    else{
        printf("%d nao e multiplo de %d",n, m);
    }

}