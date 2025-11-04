//Escreva um programa que leia as coordenadas x e y de um ponto e verifique se esse ponto pertence à reta y = 2x +1.
#include <stdio.h>
#include <conio.h>

int main(){

    int x,y, calc;

    printf("Informe x e y: ");
    scanf("%d%d", &x, &y);

    calc = (2 * x) + 1;

    if (y == calc){
        printf("%d e %d pertencem a reta.\n", x,y);
    }else{
        printf("%d e %d nao pertencem a reta.\n", x,y);
    }

    getch();
    return 0;
}