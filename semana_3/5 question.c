// Escreva um programa que leia as coordenadas x e y de um ponto e verifique a quantidade de quadrantes a que este ponto pertence.
#include <stdio.h>
#include <conio.h>

int main(){

    int x,y;
    
    printf("Informe as coordenadas X e Y: ");
    scanf("%d%d", &x, &y);

    if (x > 0 && y > 0){
        printf("%d e %d estao no quadrante 1.\n",x,y);
    }else if (x < 0 && y > 0){
            printf("%d e %d estao no quadrante 2.\n",x,y);
        }else if (x < 0 && y < 0){
                printf("%d e %d estao no quadrante 3.\n",x,y);
            }else if(x > 0 && y < 0){
                    printf("%d e %d estao no quadrante 4.\n",x,y);
                }else{
                   printf("Esta na origem.\n"); 
                }  
    getch();

    return 0;
}