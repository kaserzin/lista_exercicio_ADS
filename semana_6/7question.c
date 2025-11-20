#include <stdio.h>
#include <conio.h>

int main(){

    int N, K, I;
    printf("Informe N: ");
    scanf("%d", &N);

    for(K = N; K >= 1; K--){
        for (I = 1; I <= K; I++){
            printf("*");
        }
        printf("\n");
    }

    getch(); return 0;
}