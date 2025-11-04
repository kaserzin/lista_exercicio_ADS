#include <stdio.h>
#include <string.h>

int main() {
    char verbo[50];
    char radical[50];
    int len;

    printf("Digite um verbo regular no infinitivo: ");
    scanf("%s", verbo);

    len = strlen(verbo);

    if (len < 3) {
        printf("Verbo inválido!\n");
        return 0;
    }

    // Obtém o radical (parte antes da terminação)
    strncpy(radical, verbo, len - 2);
    radical[len - 2] = '\0';

    if (strcmp(&verbo[len - 2], "ar") == 0) {
        printf("\nConjugação do verbo %s no presente do indicativo:\n", verbo);
        printf("Eu %so\n", radical);
        printf("Tu %sas\n", radical);
        printf("Ele/Ela/Você %sa\n", radical);
        printf("Nós %samos\n", radical);
        printf("Vós %sais\n", radical);
        printf("Eles/Elas/Vocês %sam\n", radical);
    } 
    else if (strcmp(&verbo[len - 2], "er") == 0) {
        printf("\nConjugação do verbo %s no presente do indicativo:\n", verbo);
        printf("Eu %so\n", radical);
        printf("Tu %ses\n", radical);
        printf("Ele/Ela/Você %se\n", radical);
        printf("Nós %semos\n", radical);
        printf("Vós %seis\n", radical);
        printf("Eles/Elas/Vocês %sem\n", radical);
    } 
    else if (strcmp(&verbo[len - 2], "ir") == 0) {
        printf("\nConjugação do verbo %s no presente do indicativo:\n", verbo);
        printf("Eu %so\n", radical);
        printf("Tu %ses\n", radical);
        printf("Ele/Ela/Você %se\n", radical);
        printf("Nós %simos\n", radical);
        printf("Vós %sis\n", radical);
        printf("Eles/Elas/Vocês %sem\n", radical);
    } 
    else {
        printf("O verbo informado não é regular ou não está no infinitivo.\n");
    }

    return 0;
}
