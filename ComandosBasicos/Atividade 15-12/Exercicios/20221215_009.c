/*Faça um Programa que peça 2 números inteiros e um número real. Calcule e mostre: o produto do dobro do primeiro com metade do segundo.
 a soma do triplo do primeiro com o terceiro.
  o terceiro elevado ao cubo.*/

#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main(void){
    int num1,num2;
    double real;
    double primeiro, segundo, terceiro;

    printf("Escreva o primeiro numero: ");
    scanf("%d",&num1);

    printf("Escreva o segundo numero: ");
    scanf("%d",&num2);

    printf("Escreva um numero real: ");
    scanf("%lf",&real);

    primeiro = (num1*2)+(num2/2);
    segundo = num1*3+real;
    terceiro = pow(real,3);

    printf("Imprima os resultados:\n%.2lf\n%.2lf\n%.2lf", primeiro, segundo, terceiro);

}

