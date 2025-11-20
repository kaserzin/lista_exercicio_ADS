// Escreva um programa que leia vários itens de uma compra feita pelo usuário.
#include <stdio.h>
#include <conio.h>

int main(){
    char nome_item[101];
    int quantidade, control;
    float preco_uni, carrinho = 0;
    do{

        printf("Informe o nome do produto: ");
        fgets(nome_item, 101, stdin);
        printf("Informe o valor por unidade (R$): ");
        scanf("%f", &preco_uni);
        printf("Informe a quantidade a ser comprados: ");
        scanf("%d", &quantidade);

        carrinho = carrinho + (preco_uni * quantidade);
        printf("Deseja adicionar mais um produto 1 - Sim 0 - Nao: ");
        scanf(" %d", &control);
        fflush(stdin);


    }while (control != 0);
    float avista = carrinho * 0.85;
    printf("==========Formas de Pagamento==========\n");
    printf("A vista: R$ %.2f     |  A prazo: R$ %.2f\n",avista, carrinho);


    getch(); return 0;
}