/*
Faça um Programa que peça dois números e imprima a soma.
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    double num1,num2,soma;

    printf("Escreva o primeiro numero: ");
    scanf("%lf", &num1);

    printf("Escreva o segundo numero: ");
    scanf("%lf", &num2);

    soma = num1+num2;

    printf("O resultado da soma = %.2lf",soma);
    return 0;
}
