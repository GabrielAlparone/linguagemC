/*Fazer um programa que exiba todos os
divisores de um número fornecido pelo
usuário.*/
#include<stdio.h>
void main()
{
	int num, i=1;
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	while(i<=num)
	{
		if(num%i==0)
		{
			printf("%d, ", i);
		}
		i++;
	}
}
