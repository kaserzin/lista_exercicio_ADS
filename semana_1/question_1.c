// Escreva um programa que leia um número inteiro e informe o seu antecessor e o seu  sucessor. 
#include <stdio.h>

int main(){

    int numero, antecessor, successor;
    
    printf("Informe um valor: ");
    scanf("%d",&numero);

    antecessor = numero - 1;
    successor = numero + 1;

    printf("O numero informado foi: %d\nO antecessor e: %d\nO sucessor e: %d", numero, antecessor, successor);

    return 0;
}