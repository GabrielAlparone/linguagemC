/*Construir um programa que, dado um n�mero
inteiro n fornecido pelo usu�rio, exiba uma
sequ�ncia de elementos, distribu�dos em
linhas, como nos exemplos a seguir:*/
#include<stdio.h>
#include<string.h>
void main ()
{
	//declara��o de vari�veis
	int numfor, i=1;
	
	printf("Determine o numero");
	scanf("%d", &numfor);
	
	for (i=0; i<=numfor; i++)
	{
		printf("%d\n", i);
	}
}
