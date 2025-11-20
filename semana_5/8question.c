#include <stdio.h>
#include <conio.h>

int main(){

    char texto[51];

    printf("Informe um texto: ");
    fgets(texto, 51, stdin);

	for (int i = 0; texto[i] != '\0'; i++) {
        if (texto[i] >= 'a' && texto[i] <= 'z') {
            texto[i] = texto[i] - 32;
        }
    }

    printf("Texto em caixa alta: %s", texto);
    getch(); return 0;
}
