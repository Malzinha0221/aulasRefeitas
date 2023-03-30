/*Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês.
 Calcule e mostre o total do seu salário no referido mês.*/
#include<stdio.h>
#include<stdlib.h>

int main(void){
    double ganhaHora, numTrabalhadas;

    printf("Quanto quanha por hora: ");
    scanf("%lf",&ganhaHora);

    printf("Numero de horas trabalhadas no mes: ");
    scanf("%lf",&numTrabalhadas);

    numTrabalhadas = ganhaHora*numTrabalhadas;

    printf("Voce ganha por mes:R$%.2lf", numTrabalhadas);
}