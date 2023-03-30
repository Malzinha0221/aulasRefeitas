/*
    Aluno: Daniel Nazário

    Ler salario de uma pessoa e calcule o novo salário considerando que esta pessoa terá um ajuste de 10%;
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    double salario, novoSalario;

    printf("Escreva o salario: ");
    scanf("%lf",&salario);

    novoSalario = salario*0.10;

    novoSalario = novoSalario + salario;

    printf("O novo salario sera R$%.2lf",novoSalario);

    return 0;
}