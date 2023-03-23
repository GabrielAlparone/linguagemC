/*O IMC (Índice de Massa Corporal)
é um critério da Organização Mundial de Saúde
para dar uma indicação sobre a condição de
peso de uma pessoa adulta. A fórmula é:
IMC = peso / altura2

Elabore um algoritmo que, dados o peso e a
altura de um adulto, determine a sua condição
de acordo com a tabela abaixo:*/
#include<stdio.h>

int main()
{
//declaração de variaveis
float peso, altura, imctotal, Taltura;

//recebendo valores
printf("determine o seu peso: ");
scanf("%f", &peso);

printf("determine sua altura: ");
scanf("%f", &altura);

//contas
Taltura=altura*altura;
imctotal=peso/Taltura;

if(imctotal<18,5)
{
	printf("voce esta abaixo do peso.");
}
	else
		if((imctotal>=18,5) && (imctotal<25))
		{
			printf("voce esta no peso ideal");
		}
			else
				if((imctotal>=25) && (imctotal<30))
				{
					printf("voce esta com sobrepeso");
				}
					else
						if((imctotal>=30) && (imctotal<35))
						{
							printf("voce tem obesidade grau I");
						}
							else
								if((imctotal>=35) && (imctotal<40))
								{
									printf("voce tem obesidade grau II");
								}
									else
										if(imctotal>=40)
										{
											printf("voce tem obesidade grau III");
										}
}
