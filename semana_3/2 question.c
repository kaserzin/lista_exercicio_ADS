// Escreva um programa que leia o número de gols marcados pelo time da casa e o número de gols marcado pelo time visitante
#include <stdio.h>
#include <conio.h>

int main(){

    int gols_casa, gols_visitante;
    
    printf("Informe o placar do jogo (casa x visitante): ");
    scanf("%d%d", &gols_casa, &gols_visitante);

    if(gols_casa > gols_visitante){
        printf("O time da casa ganhou por %d a %d.\n",gols_casa,gols_visitante);
    }else if (gols_casa < gols_visitante){
        printf("O time visitante ganhou por %d a %d.\n",gols_visitante,gols_casa);
    }else{
        printf("EMPATE! O jogo foi empatado por %d a %d.\n",gols_casa,gols_visitante);
    }
    getch();

    return 0;
}