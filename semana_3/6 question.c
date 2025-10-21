// Escreva um programa que leia três números inteiros distintos e identifique o maior número informado.
#include <stdio.h>
#include <conio.h>

int main(){

    int num1, num2, num3;
    printf("Informe tres numeros: ");
    scanf("%d%d%d", &num1, &num2, &num3);

    if (num1 < num3 && num2 < num3){
        printf("O maior numero e o %d.\n",num3);
    }else if(num2 < num1 && num3 < num1){
            printf("O maior numero e o %d.\n",num1);
        }else{
                printf("O maior numero e o %d.\n",num2);
            }

    getch();
    return 0;
}