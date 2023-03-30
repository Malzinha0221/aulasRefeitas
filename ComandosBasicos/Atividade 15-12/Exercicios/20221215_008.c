/*Faça um Programa que peça a temperatura em graus Celsius, transforme e mostre em graus Farenheit.*/

#include<stdio.h>
#include<stdlib.h>

int main(void){
    double celsius, farenheit;

    printf("Quantos grau de celsius: ");
    scanf("%lf",&celsius);

    farenheit = (celsius-32)*5/9;

    printf("Graus em celsius: %.2lf°F",farenheit);

    return 0;
}