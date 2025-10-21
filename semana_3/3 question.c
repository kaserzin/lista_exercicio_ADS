//  Escreva um programa que leia a idade de uma pessoa e verifique se ela é criança (0- 12 anos), 
//  adolescente (13-17 anos), adulta (18-59) ou idosa (acima de 60 anos).

#include <stdio.h>

int main(){

    int idade = 0;
    printf("Informe a idade: ");
    scanf("%d", &idade);

    if(idade >= 60){
        printf("A pessoa e idosa. \n");
    }
    else if(idade <= 59 && idade >= 18){
        printf("A pessoa e adulta. \n");
    }
    else if(idade <= 17 && idade >= 13){
        printf("A pessoa e adolescente. \n");
    }
    else if(idade <= 12 && idade >= 0){
        printf("A pessoa e crianca. \n");
    }
    else{
        printf("Idade invalida. ");
    }
}