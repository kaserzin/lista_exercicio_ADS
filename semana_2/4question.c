//Escreva um programa que leia os valores das coordenadas X e Y e dois pontos P e Q e
// determine a distância entre estes dois pontos.
#include <stdio.h>
#include <math.h>

int main(){

    float x1,x2,y1,y2;

    printf("Informe a coordenada x do ponto P: ");
    scanf("%f", &x1);
    printf("Informe a coordenada y do ponto P: ");
    scanf("%f", &y1);
    printf("Informe a coordenada x do ponto G: ");
    scanf("%f", &x2);
    printf("Informe a coordenada y do ponto G: ");
    scanf("%f", &y2);

    float distancia = (x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2);
    float distancia_final = sqrt(distancia);
    printf("A distancia dos pontos P e G e: %.1f. ", distancia_final);

    return 0;
}