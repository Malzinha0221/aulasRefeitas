/*Faça um Programa que peça as 4 notas bimestrais e mostre a média.*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    float notas, media;

    for (int i = 0; i <= 3; i++)
    {
        printf("Escreva as %d notas: ", i+1);
        scanf("%f",&notas);

        media+=notas/4;
    }
    
    printf("A media = %.1f",media);

    return 0;
}