/*Faça um programa que leia um
número N inteiro, menor ou igual a 18. Se for
maior do que 18, o programa exibirá uma
mensagem de erro e terminará a sua
execução; caso contrário, deverá exibir os
números no intervalo de 1 a 99 cujos
algarismos somem N.
Exemplo:
N = 12 Portanto, o programa deve exibir
os números que estão no
intervalo de 1 a 99, cujos
algarismos somam 12. Ou seja:
39, 48, 57, 66, 75, 84 e 93.*/
#include<stdio.h>
int main()
{
//declaração de variaveis
int valor, soma, valordez, valoruni, i=0;
printf("Digite um numero: ");
scanf("%d", &valor);

if(valor>18)
{
	printf("ERRO!");
}
else if(valor<=18)
{
	while(i<99)
	{
		valordez=valor/10;
		valoruni=valor%10;
		soma=valordez+valoruni;
		i++;
		if(soma==valor)
		{
			printf("%d ", i);
		}
	}
}
}
