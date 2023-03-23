/*Escreva um algoritmo para calcular o salário
semanal de uma pessoa, determinado pelas
condições que seguem: se o número de horas
trabalhado for inferior ou igual a 40, a pessoa
recebe x reais por hora; caso contrário, a
pessoa recebe um adicional de 50% para cada
hora trabalhada acima das 40 iniciais.*/
#include<stdio.h>

int main()
{
//declaração de variaveis
float salario, Htrabalhada, Hextra, salariototal, salarioextra;

//recebendo informações
printf("determine o numero de horas trabalhadas: ");
scanf("%f",&Htrabalhada);

printf("determine o salario por hora: ");
scanf("%f", &salario);

//calculo de salário total
if (Htrabalhada<=40)
{
	salariototal=salario*Htrabalhada;
	printf("o seu salário e de %0.2f reais", salariototal);
}	
	else
		if(Htrabalhada>40)
		{
			Hextra=Htrabalhada-40;
			salarioextra=Hextra*salario;
			salarioextra=salarioextra/2;
			salariototal=40*salario;
			salariototal=salariototal+salarioextra;
			printf("o seu salario e de %0.2f reais", salariototal);
		}
}
