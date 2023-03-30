/*Faça um Programa que calcule a área de um quadrado, em seguida mostre o dobro desta área para o usuário.*/
#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    double lado,area;

    printf("Escreva o tamanho do lado do quadrado: ");
    scanf("%lf",&lado);

    area = pow(lado,2);

    printf("O dobro da area do quadrado: %.2lf",area*2);
    
    return 0;
}
