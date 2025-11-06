// Escreva um programa que leia um texto e, em seguida, leia um caractere x e informe quantas vezes o caractere x aparece dentro do texto informado.
#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(){

    char texto[50], letra;
    int count = 0, K;

    printf("Informe um texto: ");
    gets(texto);
    printf("Informe uma letra para ser contada: ");
    scanf("%c", &letra);
    int tamanho = strlen(texto);

    for(K = 0; K <tamanho; K++){

        if (texto[K] == letra){
            count += 1;
        }
    }
    printf("A letra %c apareceu %d vezes no texto '%s'.\n",letra,count,texto);

    getch();
    return 0;
}