#include <stdio.h>
#include <conio.h>


int main() {

    int N, K, I, J;
    printf("Informe N: ");
    scanf("%d", &N);

    for(K = N; K >= 1; K--){
        for (I = 1; I <= N - K; I++){
            printf(" ");
        }
        for (J = 1; J <= K; J++) {
            printf("*");
        }
        printf("\n");
    }

    getch(); return 0;
}