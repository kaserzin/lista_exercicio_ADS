#include <stdio.h>
#include <conio.h>
const float IMC_MIN = 18.5;
const int IMC_MAX = 24.9;
int main(){

    float peso, altura, imc, k, perc_acima, perc_abaixo,  perc_ideal;
    int acima = 0, abaixo = 0, ideal = 0;


    for (k = 1;k <= 4; k++){
        printf("Informe o peso e altura: ");
        scanf("%f%f", &peso, &altura);


        imc = peso / (altura * altura);

        if (imc > IMC_MAX){
            acima += 1;
        }else if (imc < IMC_MIN){
            abaixo += 1;
        }else{
            ideal += 1;
        }
    }
    perc_abaixo = (4 * abaixo) / 100;
    perc_acima = (4 * acima) / 100;
    perc_ideal = (4 * abaixo) / 100;

    printf("Percentual abaixo: %.1f.\nPercentual acima: %.1f.\nPercentual ideal: %.1f.\n",perc_abaixo, perc_acima,perc_ideal);

    getch(); return 0;
}