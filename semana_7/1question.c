// Escreva um programa que leia vários números inteiros e calcule a média dos números pares e a média dos números ímpares.
#include <stdio.h>
#include <conio.h>

int main(){

    int num, count_par = 0, count_impar = 0, sum_par = 0, sum_impar = 0;

    do{
        printf("Informe um valor: ");
        scanf("%d", &num);

        if(num == 0){
            printf("Progama encerrado.\n");
        }else if(num % 2 == 0){
            count_par += 1;
            sum_par += num;
        }else{
            count_impar += 1;
            sum_impar += num;  
        }

    }while(num != 0);
    int media_impar = sum_impar / count_impar;
    int media_par = sum_par / count_par;
    printf("A media dos numeros pares foi: %d\nA media dos numeros impares foi: %d", media_par, media_impar);

    getch(); return 0;
}