#include <stdio.h>

int main() {
    int K, N, num, i;

    printf("Informe um valor: ");
    scanf("%d", &N);
    printf("Informe o valor de K: ");
    scanf("%d", &K);

    num = N;

    for (i = 1; i < K; i++) {
        if (N == 0) {
            printf("0\n");
            return 0;
        }
        N /= 10;
    }


    if (N == 0) {
        printf("0\n");
    } else {        
        printf("A %d-esimo algarismo de %d eh %d\n",K, num, N % 10);
    }

    return 0;
}
