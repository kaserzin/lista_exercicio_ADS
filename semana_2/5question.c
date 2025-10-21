//Escreva um programa que leia o nome e a quantidade de votos recebidos por cada um
// dos três candidatos a prefeito de uma cidade e calcule o percentual de votos recebidos
// por cada candidato.
#include <stdio.h>

int main(){

    int votos_totais, votos_c1, votos_c2, votos_c3;
    float percentual_c1, percentual_c2, percentual_c3;

    printf("Informe a quantidade de votos do candidato 1: ");
    scanf("%d", &votos_c1);
    printf("Informe a quantidade de votos do candidato 2: ");
    scanf("%d", &votos_c2);
    printf("Informe a quantidade de votos do candidato 3: ");
    scanf("%d", &votos_c3);

    votos_totais = votos_c1 + votos_c2 + votos_c3;

    // Para saber o percentual, utilizamos votos_cn * 100 / votos_totais
    // entenda votos_cn, "n" representa que há 3 outras vareiaveis com nomes distintos

    percentual_c1 = (votos_c1 * 100.0) / votos_totais;
    percentual_c2 = (votos_c2 * 100.0) / votos_totais;
    percentual_c3 = (votos_c3 * 100.0) / votos_totais;

    printf("Com um total de %d votos, vamos as parciais.\nCandidato 1: %d votos, representanto %.2f porcento dos votos.",votos_totais, votos_c1, percentual_c1);
    printf("Cadidato 2: %d votos, representado %.2f porcento dos votos.\nCandidato 3: %d votos, representado %.2f porcento dos votos.", votos_c2, percentual_c2, votos_c3, percentual_c3);

    return 0;
}