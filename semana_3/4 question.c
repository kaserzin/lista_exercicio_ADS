// Escreva um programa que leia o valor de um ano e verifique se ele é ou não bissexto.  
// Um ano é bissexto se ele for divisível por quatrocentos ou se se ele for divisível por  4 mas não for divisível por 100. 

#include <stdio.h>

int main(){

    int ano = 0;
    printf("Insira algum ano: ");
    scanf("%d", &ano);
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)){
        printf("%d e bissexto. \n", ano);
    }
    else{
        printf("%d nao e bissexto. \n", ano);
    }
}