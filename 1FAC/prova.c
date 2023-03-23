#include<stdio.h>
void main ()
{
//declaração de variaveis
float  valoreal, maiorvalor=0, totalmedia=0, mediaf, quantvalor, i;

printf("Digite a quantidade de valores que voce quer que sejam lidos: ");
scanf("%f", &quantvalor);

while(i<quantvalor)
{
	if(quantvalor<0)
	{
		printf("Digite a quantidade de valores que voce quer que sejam lidos: ");
	scanf("%f", &quantvalor);
	}
	i++;
printf("Digite um valor real: ");
scanf("%f", &valoreal);

if(valoreal>maiorvalor)
{
	maiorvalor=valoreal;
}
totalmedia= totalmedia+valoreal;
}
mediaf=totalmedia/quantvalor;
printf("A media de todos os valores informados e de %0.1f\n", mediaf);
printf("O maior valor e %0.1f", maiorvalor);
}

