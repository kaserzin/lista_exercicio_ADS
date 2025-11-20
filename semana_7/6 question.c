#include <stdio.h>
#include <conio.h>

int main(){

    int numero, sum = 0;
    printf("Informe um valor: ");
    scanf("%d", &numero);

    printf("A soma de todos os algarismos de %d eh: ", numero);
    while (numero > 0)
    {
        sum += numero % 10;
        numero /= 10;
    }
    printf("%d\n", sum);

    getch();return 0;
}