/*Um fazendeiro realizou um
tratamento sobre sua plantação de café
que gerou um crescimento constante de C
% em sua produção, por ano.
Considerando que atualmente sua
produção anual seja de M u.p.,
implementar um programa que determine
a quantidade de anos necessária para que
a produção duplique.*/
#include<stdio.h>

void main ()
{
	//declaração de variaveis
	float crescimento, producaoatual, quadruplo, produto=1;
	int anos = 0;
	
	//recebendo valores
	printf("Determine sua produçao atual: ");
	scanf("%f", &producaoatual);
	
	printf("Determine o crescimento constante em porcentagem: ");
	scanf("%f", &crescimento);
	quadruplo=producaoatual*4;
	crescimento=crescimento/100;
	while(producaoatual<quadruplo)
	{
		produto=producaoatual*crescimento;
		producaoatual=producaoatual+produto;
		anos++;
	}
	printf("A quantidade de anos necessaria para quadriplicar a producao e de %d anos", anos);
}
