/*Faça um Programa que peça o raio de um círculo, calcule e mostre sua área.*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void){
    double area, pi=3.14,raio;

    printf("O tamanho do raio: ");
    scanf("%lf", &raio);

    area = pi*pow(raio,2);

    printf("A area do circulo =%.2lf",area);

    return 0;

}