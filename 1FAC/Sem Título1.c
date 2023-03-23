/*Construir um programa que, dado um número
inteiro n fornecido pelo usuário, exiba uma
sequência de elementos, distribuídos em
linhas, como nos exemplos a seguir:*/
#include<stdio.h>
#include<string.h>
void main ()
{
	//declaração de variáveis
	int numfor, i=1;
	
	printf("Determine o numero");
	scanf("%d", &numfor);
	
	for (i=0; i<=numfor; i++)
	{
		printf("%d\n", i);
	}
}
