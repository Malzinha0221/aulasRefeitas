/*
    Aluno: Daniel Nazário

    Ler nome, sexo e idade de uma pessoa e verificar se ela é mulher;
*/

#include <stdio.h>

int main(void){
    int idade;
    char nome[50];
    char sexo;

    printf("Escreva o seu nome: ");
    scanf("%s",&nome);
    fflush(stdout);
    setbuf(stdin, 0);

    printf("Escreva a sua idade: ");
    scanf("%d",&idade);

    printf("Escreva o seu sexo F = MULHER e H = HOMEM: ");
    scanf("%s",&sexo);

    fflush(stdout);
    setbuf(stdin, 0);

    if (sexo == 'F' || sexo == 'f')
    {
        printf("eh mulher");
    }
    else
        printf("eh homem");

    return 0;
}