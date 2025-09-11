// Escreva um programa que leia três números inteiros distintos e 
// identifique o maior  número lido.

#include <stdio.h>

int main(){

    int n1 = 0;
    int n2 = 0;
    int n3 = 0;

    printf("Informe n1: ");
    scanf("%d", &n1);
    printf("Informe n2: ");
    scanf("%d", &n2);
    printf("Informe n3: ");
    scanf("%d",&n3);

    if (n1 > n2 && n1 > n3){ 
        printf("N1 e o maior numero. \n");
    }
    else if(n2 > n1 && n2 > n3){
        printf("N2 e o maior numero. \n");
    }
    else if(n3 > n1 && n3 > n2){
        printf("N3 e o maior numero. \n");
    }
    else{
        printf("ERRO! Numeros com mesmo valor. \n");
    }
}