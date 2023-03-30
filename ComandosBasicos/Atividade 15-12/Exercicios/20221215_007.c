/*Faça um Programa que peça a temperatura em graus Farenheit, transforme e mostre a temperatura em graus Celsius. C = (5 * (F-32) / 9).*/

#include<stdio.h>
#include<stdlib.h>

int main(void){
    double celsius, farenheit;

    printf("Quantos grau de farenheit: ");
    scanf("%lf",&farenheit);

    celsius = ((farenheit-32)*5)/9;

    printf("Graus em celsius %.2lf°C",celsius);

    return 0;
}