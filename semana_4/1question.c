//Escreva um programa que leia três números distintos e identifique o número que não é nem o menor e nem o maior número.
#include <stdio.h>
#include <conio.h>

int main (){ 

    int num1, num2, num3;
    printf("Informe tres numeros: ");
    scanf("%d%d%d", &num1, &num2,&num3);

    if ((num1 > num3 && num3 > num2) || (num2 > num3 && num3 > num1)){
        printf("O numero do meio eh: %d", num3);
    }else if((num3 > num1 && num1 > num2)|| (num2 > num1 && num1 > num3)){
            printf("O numero do meio eh: %d", num1);
        }else{
                printf("O numero do meio eh: %d", num2);
            }

    getch();
    return 0;
}