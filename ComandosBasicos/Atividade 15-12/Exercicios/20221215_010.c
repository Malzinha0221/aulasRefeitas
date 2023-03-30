/*Tendo como dados de entrada a altura de uma pessoa, construa um algoritmo que calcule seu peso ideal,
 usando a seguinte fórmula: (72.7*altura) - 58*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    double pesoideal,altura;

    printf("Escreva sua altura: ");
    scanf("%lf",&altura);

    pesoideal = (72.7*altura) - 58;

    printf("Seu peso ideal = %.2lf", pesoideal);

    return 0;
}