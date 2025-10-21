//Escreva um programa que leia um número inteiro e determine o seu valor absoluto. O valor
// absoluto deve ser calculado sem o uso de qualquer função oferecida pela linguagem.
#include <stdio.h>
#include <conio.h>

int main(){

    int numero;

    printf("Informe um numero: ");
    scanf("%d", &numero);

    if (numero >= 0){
        printf("O valor absoluto de %d eh %d.\n",numero, numero);
    }else{
        printf("O valor absoluto de %d eh %d.\n",numero, numero * -1);
    }

    getch();
    return 0;
}