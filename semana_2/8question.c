//Escreva um programa que leia os dois últimos valores da leitura de um medidor de
//energia em KWh e calcule o valor da conta de energia, considerando que: o preço de 1
//KWh é R$ 0,35, o valor da ICMS corresponde à 17% do valor do consumo e a taxa de
//iluminação pública é de R$ 15,00.
#include <stdio.h>

int main(){

    float valor, leitura_antiga, leitura_atual;

    printf("Informe a leitura antiga (KWh): ");
    scanf("%f", &leitura_antiga);
    printf("Informe a leitura atual (KHw): ");
    scanf("%f", &leitura_atual);

    valor = ((leitura_atual - leitura_antiga) * 0.35) * 1.17;

    printf("O consumo desse mes foi: %.1f KWh\nO valor da conta e: RS %.2f",leitura_atual - leitura_antiga, valor + 15);

    return 0;
}