/*Construir um algoritmo que calcule o peso ideal
de uma pessoa, de acordo com o seu g�nero e
altura, utilizando as seguintes f�rmulas:
? para homens: (72.7*h)-58
? para mulheres: (62.1*h)-44.7   */
#include<stdio.h>
#include<stdlib.h>

int main ( )
{
//declara��o de variaveis
float altura, peso, um;
char sexo, F, M;
//informa��es do cliente
printf("digite sua altura: ");
scanf("%f", &altura);

printf("Digite seu sexo (F para feminino e M para masculino): ");
scanf("%d", &sexo);

//calculos e especificac�es
if (sexo ==F)
{
	peso= 62.1*altura;
	peso=peso-44.7;
	printf("o seu peso ideal e %0.2f kg", peso);
}
	else
		if(sexo==M)
		{
			peso=72.7*altura;
			peso=peso-58;
			printf("o seu peso ideial e %0.2f kg", peso);
		}
}
