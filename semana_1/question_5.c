//  Escreva um programa em que leia um número inteiro entre 1000 e 9999 e 
// verifique  se o número lido é ou não um palíndromo.

#include <stdio.h>

int main(){

    int numero = 0;

    printf("Informe um valor entre 1000 e 9999: ");
    scanf("%d", &numero);

    if (numero <= 999 || numero >= 10000){
        printf("Valor invalido. \n");
    }
    else{
        int milhar = numero /1000;
        int centena = (numero / 100) % 10;
        int dezena = (numero / 10) % 10;
        int unidade = numero % 10;

        if (milhar == unidade && centena == dezena){
            printf("O numero %d e palindromo. \n", numero);
        }
        else{
            printf("O numero nao e um palindromo. \n");
        }

    }

}