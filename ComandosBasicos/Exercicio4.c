/*
    Aluno: Daniel Nazário

    Faça um algoritmo que leia o valor de uma conta e calcule a porcentagem do garçom;
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    double valor, perc, total;

    printf("Escreva o valor da conta: ");
    scanf("%lf", &valor);

    printf("Escreva a percentagem do garçom: ");
    scanf("%lf", &perc);

    total =valor*(perc/100);

    printf("A percentagem do garçom R$%.2lf",total);

    return 0;


}