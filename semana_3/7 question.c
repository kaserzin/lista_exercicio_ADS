#include <stdio.h>

int main() {
    int angulo1, angulo2, angulo3;
    int soma_angulos;

    printf("Informe o valor de tres angulos (em graus): ");
    scanf("%d%d%d", &angulo1,&angulo2,&angulo3);

    soma_angulos = angulo1 + angulo2 + angulo3;

    if (soma_angulos != 180) {
        printf("\nERRO: Os valores informados (soma = %d) não formam um triângulo válido.\n", soma_angulos);
    } 
    else {
        if (angulo1 == 90 || angulo2 == 90 || angulo3 == 90) {
            printf("\nRESULTADO: É um TRIÂNGULO RETÂNGULO.\n");
            printf("Pois a soma dos ângulos é 180 e possui um ângulo de 90 graus.\n");
        } 
        else {
            printf("\nRESULTADO: É um TRIÂNGULO VÁLIDO, mas NÃO é retângulo.\n");
        }
    }

    return 0;
}