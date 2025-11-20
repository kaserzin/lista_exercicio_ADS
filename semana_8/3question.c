//Escreva um programa que simule o funcionamento de um caixa eletrônico.
#include <stdio.h>
#include <conio.h>

int main(){

    int ced100, ced50, ced20, ced10, saque, calc;

    do{

        printf("Informe um valor a ser sacado (MAX: R$ 1000): ");
        scanf("%d", &saque);
        calc = saque;
        if (saque % 10 != 0){
            printf("Valor invalido. \n");
        }else if(saque == 0){
            printf("Operacao encerrada. \n");
        }
            else{
            ced100 = calc / 100;
            calc = calc % 100;
            ced50 = calc / 50;
            calc = calc % 50;
            ced20 = calc / 20;
            calc = calc % 20;
            ced10 = calc / 10;
            calc = calc % 10;

            printf("Para realizar o saque de R$ %.2d sao nescessario: \n", saque);
            printf("100: %d\n", ced100);
            printf("50 : %d\n", ced50);
            printf("20 : %d\n", ced20);
            printf("10 : %d\n", ced10);
        }

    }while(saque != 0);


    getch(); return 0;
}