
//Escreva um programa que leia o valor de uma distância percorrida em km e o tempo 
//  gasto em horas e calcule a velocidade média em m/s.
#include <stdio.h>

int main(){

    float distancia, tempo;
    float velocidade_media;

    printf("Informe a distancia percorrida: ");
    scanf("%d", &distancia);
    printf("Informe o tempo em que foi percorrido: ");
    scanf("%d",&tempo);

    velocidade_media = (distancia / tempo) / 3.6;

    printf("A velocidade media foi: %1.f m/s.\n",velocidade_media);


    return 0;
}
