//Escreva um programa que leia três números inteiros positivos e calcule o mínimo múltiplo comum dos números informados.
#include <stdio.h>
#include <conio.h>

int main(){

    int num1, num2, num3, mmc;

    printf("Informe 3 numeros inteiros positivos: ");
    scanf("%d%d%d", &num1,&num2,&num3);

    if(num1 > num2 && num1 > num3){
        mmc = num1;
    }else if (num1 < num2 && num2 > num3){
        mmc = num2;
    }else{
        mmc = num3;
    }

    while (mmc % num1 != 0 || mmc % num2 != 0 || mmc % num3 != 0)
    {
        mmc += 1;
    }
    
    printf("O MMC de %d,%d e %d = %d\n", num1, num2,num3, mmc);

    getch(); return 0;
}