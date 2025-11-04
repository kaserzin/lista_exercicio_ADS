//Escreva um programa que leia um caractere correspondente ao estado civil de uma pessoa e imprima o estado civil informado por extenso.
#include <stdio.h>
#include <conio.h>

int main(){

    char estado;
    printf("Informe uma letra maiuscula: ");
    scanf("%c", &estado);
    switch (estado)
    {
    case 'S': 
        printf("Solteiro.\n");
        break;
    case 'D':
        printf("Divorciado.\n");
        break;
    case 'C':
        printf("Casado.\n");
        break;
    case 'V':
        printf("Viuva.\n");
        break;
    default:
        printf("Letra invalida.\n");
        break;
    }

    getch();
    return 0;
}