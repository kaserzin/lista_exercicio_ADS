//Escreva um programa que leia a quantidade de horas trabalhadas por um funcionário
//de uma empresa durante um mês e o valor de cada hora trabalhada e determine o seu
//pagamento.
#include <stdio.h>

int main(){

    int horas_trabalhadas;
    float valor_hora, salario_final;

    printf("Informe as horas trabalhadas no mes (min:160h): ");
    scanf("%d", &horas_trabalhadas);
    printf("Informe o valor da hora trabalhada (reais): RS ");
    scanf("%f", &valor_hora);
    
    salario_final = 160 * valor_hora + ((horas_trabalhadas - 160) * (0.5 * valor_hora));

    printf("O salario final e de RS %.2f\nCargo horario base: RS %.2f\nHoras extras: RS %.2f", salario_final, 160 * valor_hora, (horas_trabalhadas - 160) * (valor_hora * 0.5));

    return 0;
}