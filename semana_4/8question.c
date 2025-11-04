#include <stdio.h>

int main() {
    int hora, minuto, fuso;
    int novaHora;

    printf("Digite a hora (0-23): ");
    scanf("%d", &hora);
    printf("Digite os minutos (0-59): ");
    scanf("%d", &minuto);
    printf("Digite o fuso horario (pode ser negativo): ");
    scanf("%d", &fuso);

    novaHora = hora + fuso;
   
    if (novaHora >= 24) {
        novaHora = novaHora % 24;
    } else if (novaHora < 0) {
        novaHora = 24 + novaHora; 
    }

    printf("Horario convertido: %02d:%02d hs\n", novaHora, minuto);

    return 0;
}
