// Escreva um programa que leia o número total de questões existentes em uma prova e
//o número de questões que um candidato acertou e determine o seu percentual de
//acertos e o seu percentual de erros.
#include <stdio.h>

int main(){

    int questoes_totais, questoes_certas;

    printf("Informe o numero de questoes da prova: ");
    scanf("%d",&questoes_totais);
    printf("Informe quantas questoes certas: ");
    scanf("%d", &questoes_certas);

    float percentual_certas = (100 * questoes_certas) / questoes_totais;

    printf("Com %d questoes certas, o percentual de acerto e %.1f\n", questoes_certas, percentual_certas);
    printf("E o percentual de erro e de %.1f", 100 - percentual_certas);

    return 0;
}