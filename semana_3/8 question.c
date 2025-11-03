#include <stdio.h>
#include <conio.h>
const float FATOR_COMPARACAO = 0.7;

int main(){

    float preco_gasolina, preco_alcool;
    float limite_alcool;

    printf("Informe o preço da gasolina e o preço do alcool: ");
    scanf("%f%f", &preco_gasolina, &preco_alcool); 

    limite_alcool = preco_gasolina * FATOR_COMPARACAO;

    if (limite_alcool <= preco_alcool){
        printf("E melhor abastecer com GASOLINA.\n");
    }
    else{ 
        printf("E melhor abastecer com ALCOOL.\n");
    }

    getch();   
    return 0;
}