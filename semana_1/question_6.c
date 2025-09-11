// Escreva um programa que leia quatro números reais e verifique se eles formam, 
// na  ordem em que foram digitados, uma progressão aritmética, 
//uma progressão  geométrica, os dois tipos de progressão ou nenhum tipo de progressão

#include <stdio.h>

int main(){

    float numero_1,numero_2, numero_3, numero_4;
    int true_pa = 0, true_pg = 0;

    printf("Escreva quatro numeros reais em sequencia: ");
    scanf("%f %f %f %f", &numero_1, &numero_2, &numero_3, &numero_4);

    if((numero_2 - numero_1 == numero_3 - numero_2) && (numero_3 - numero_2 == numero_4 - numero_3)){
        true_pa = 1;
    }
    if((numero_2 / numero_1 == numero_3 / numero_2) && (numero_3 / numero_2 == numero_4 / numero_3)){
        true_pg = 1;
    }

    if (true_pa == 1 && true_pg == 1){
        printf("A sequencia de numeros e tanto uma PA quanto uma PG. \n");
    }
    else if(true_pa == 1 && true_pg == 0){
        printf("A sequencia de numeros e apenas uma PA. \n");
    }
    else if(true_pa == 0 && true_pg == 1){
        printf("A sequencia de numeros e apenas uma PG. \n ");
    }
    else{
        printf("A sequencia de numeros nao e nem uma PA nem uma PG. \n");
    }

}