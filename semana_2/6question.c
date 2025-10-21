// Escreva um programa que leia o tamanho de um arquivo em MB e a taxa de
// transmissão da rede em KB/s e calcule o tempo aproximado necessário para a
// transmissão do arquivo. A resposta deve ser dada através de uma mensagem na forma
// X horas, Y minutos e Z segundos.
#include <stdio.h>

int main(){

    int arquivo_mb, taxa_kb;

    printf("Informe o tamanho do arquivo (mb): ");
    scanf("%d",&arquivo_mb);
    printf("Informe a taxa de transmissao da rede (kb/s): ");
    scanf("%d", &taxa_kb);

    int tamanho_kb = arquivo_mb * 1024;
    int tempo = tamanho_kb / taxa_kb;
   
    int horas = tempo / 3600;
    int minutos = (tempo % 3600) / 60;
    int segundos = tempo % 60;

    printf("O arquivo a ser enviado tem tamanho de %d MB\n", arquivo_mb);
    printf("A taxa de envio e de %d KB/s\n", taxa_kb);
    printf("O tempo aproximado de envio e de %d horas, %d minutos e %d segundos.\n", horas, minutos, segundos);

    return 0;
}