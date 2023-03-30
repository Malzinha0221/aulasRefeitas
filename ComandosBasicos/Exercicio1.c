/*
    Aluno: Daniel Nazário

    Ler base e altura de um triângulo. Calcular e escrever a área (area = base*altura/2);
*/

#include <stdio.h>

int main(void){

    double area,base,altura;

    printf("Escreva a base do triangulo: ");
    scanf("%lf",&base);

    printf("Escreva a altura do triangulo: ");
    scanf("%lf",&altura);

    area = (base*altura)/2;

    printf("A area do triangulo = %.2lf",area);

    return 0;
}