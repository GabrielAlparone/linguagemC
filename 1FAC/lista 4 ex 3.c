/*Jo�ozinho investiu Q reais em
uma aplica��o com rendimento fixo de R% ao
m�s. Pede-se a implementa��o de um
programa que calcule o valor (e exiba-o)
dispon�vel na conta de Jo�ozinho ap�s A anos
de investimento.*/
#include<stdio.h>
int main()
{
//declara��o de vari�veis
float investimento, rendimento, rend, totalvalor, totalvalormes;
int anos, inicio=0;

//recebendo valores
printf("Determine o investimento em reais: ");
scanf("%f", &investimento);

printf("Determine o rendimento fixo: ");
scanf("%f", &rendimento);
rendimento=rendimento/100;

printf("Determine os anos de investimento: ");
scanf("%d", &anos);

while(inicio<anos*12)
{	
	rend=rendimento*investimento;
	investimento=rend+investimento;
	inicio++;
}
printf("estao disponiveis %0.2f reais na conta de joaozinho",investimento);
}
