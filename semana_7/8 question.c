#include <stdio.h>
#include <conio.h>

int main() {
    double valorFinanciado, priPrestacao, prestacaoAtual, totalPago = 0.0;
    int numPrestacoes;

    printf("Digite o valor a ser financiado: ");
    scanf("%lf", &valorFinanciado);

    printf("Digite o numero de prestacoes (maximo 240): ");
    scanf("%d", &numPrestacoes);

    if (numPrestacoes < 1 || numPrestacoes > 240) {
        printf("Numero de prestacoes invalido!\n");
        return 1;
    }

    priPrestacao = valorFinanciado / numPrestacoes;
    prestacaoAtual = priPrestacao;

    printf("\n========= Valores das Prestacoes =========\n");

    for (int i = 1; i <= numPrestacoes; i++) {
        printf("Prestacao %d: R$ %.2f\n", i, prestacaoAtual);
        totalPago += prestacaoAtual;
        prestacaoAtual *= 1.07;
    }

    printf("\nValor total pago: R$ %.2f\n", totalPago);
    printf("Diferenca entre total pago e valor financiado: R$ %.2f\n", totalPago - valorFinanciado);

    return 0;
}
