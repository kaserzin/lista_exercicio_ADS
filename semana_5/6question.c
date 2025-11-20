//Escreva um programa que leia um texto e, em seguida, leia dois caracteres x e y e substitua, no texto informado, todas as ocorrências do caractere x pelo caractere y.
#include <stdio.h>
#include <conio.h>

int main(){

    char palavra[21], x, y;
    int k;

    printf("Informe uma palvra: ");
    scanf(" %s", palavra);
    printf("Informe o caracter x: ");
    scanf(" %c", &x);
    printf("Informe o caracter y: ");
    scanf(" %c", &y);
    
    printf("A palavra %s teve os caracteres %c substituido por %c\n", palavra, x, y);
    for (k=0; palavra[k] != '\0'; k++){
        if (palavra[k] == x){
            palavra[k] = y;
        }
    }   
    printf("Resultado: %s", palavra);
    
    getch(); return 0;
}