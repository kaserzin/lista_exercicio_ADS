//Escreva um programa em que leia um número inteiro entre 1000 e 9999 e verifique se o número informado é ou não um palíndromo.
#include <stdio.h>
#include <conio.h>

int main(){

    int num, verify, uni, dez, cem, mil;
    printf("Informe um numero entre 1000 e 9999: ");
    scanf("%d", &num);

    mil = num/1000;
    cem = (num/100) % 10;
    dez = (num%100) / 10;
    uni = num % 10;

    verify = (uni * 1000) + (dez * 100) + (cem * 10) + mil;

    if(verify == num){
        printf("E um palindromo.\n");
    }else{
        printf("Nao e um palindromo.\n");
    }

    getch();
    return 0;
}