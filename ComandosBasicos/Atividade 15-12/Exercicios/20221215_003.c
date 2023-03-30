/*Faça um Programa que converta metros para centímetros*/

#include <stdio.h>

int main(void){
    double metros, centimetros;

    printf("Escreva quantos metros: ");
    scanf("%lf",&metros);

    centimetros = metros*100;

    printf("O valor em centimetros = %.0lfcm",centimetros);
}