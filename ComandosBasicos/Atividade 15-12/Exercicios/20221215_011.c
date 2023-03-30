/*Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês.
 Calcule e mostre o total do seu salário no referido mês, sabendo-se que
  são descontados 11% para o Imposto de Renda, 8% para o INSS e 5% para o sindicato, faça um programa que nos dê:
salário bruto.
Quanto pagou ao INSS.
quanto pagou ao sindicato.
o salário líquido (Salário Líquido = Salário Bruto - Descontos)*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    double ganhaHora, numTrabalhadas, salario;
    double salarioLiquido, inss,impostoRenda,sindicato,descontos;

    printf("Quanto quanha por hora: ");
    scanf("%lf",&ganhaHora);

    printf("Numero de horas trabalhadas no mes: ");
    scanf("%lf",&numTrabalhadas);

    salario = ganhaHora*numTrabalhadas;
    impostoRenda = salario*0.11;
    sindicato = salario*0.05;
    inss = salario*0.08;
    descontos = inss+sindicato+impostoRenda;
    salarioLiquido = salario - descontos;

    printf("Voce ganha por mes:R$%.2lf\n",salario);
    printf("Voce pagou de imposto de renda:R$%.2lf\n",impostoRenda);
    printf("Voce pagou de inss:R$%.2lf\n",inss);
    printf("Voce pagou pro sindicato:R$%.2lf\n",sindicato);
    printf("Quanto foi descontado no seu salario:R$%.2lf\n",descontos);
    printf("Quanto vai receber no final do mes:R$%.2lf\n",salarioLiquido);


    return 0;

}