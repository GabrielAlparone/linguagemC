/*Fa�a um programa que leia um
n�mero inteiro positivo N e exiba todos os
m�ltiplos de Y inferiores a N, onde N e Y s�o
fornecidos pelo usu�rio.*/
#include<stdio.h>
int main()
{
//declara��o de variaveis
int n1, n2, mult, i=1 ;

//recebendo valores
printf("Determine o primeiro numero: ");
scanf("%d", &n1);

printf("Determine o segundo numero: ");
scanf("%d", &n2);

while(n1>i)
{
	if(n2%i==0)
	{
		printf("%d, ", i);
	}
	i++;
}
}
