/*Escreva um algoritmo para calcular o sal�rio
semanal de uma pessoa, determinado pelas
condi��es que seguem: se o n�mero de horas
trabalhado for inferior ou igual a 40, a pessoa
recebe x reais por hora; caso contr�rio, a
pessoa recebe um adicional de 50% para cada
hora trabalhada acima das 40 iniciais.*/
#include<stdio.h>

int main()
{
//declara��o de variaveis
float salario, Htrabalhada, Hextra, salariototal, salarioextra;

//recebendo informa��es
printf("determine o numero de horas trabalhadas: ");
scanf("%f",&Htrabalhada);

printf("determine o salario por hora: ");
scanf("%f", &salario);

//calculo de sal�rio total
if (Htrabalhada<=40)
{
	salariototal=salario*Htrabalhada;
	printf("o seu sal�rio e de %0.2f reais", salariototal);
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
