/*Dado um número inteiro N, fazer um
programa que exiba os números pares
iguais ou inferiores a N.*/
#include<stdio.h>
int main ()
{
	int num, i=0, total=0; i=0

	printf("Digite um numero inteiro: ");
	scanf("%d", &num);
	total=num;
	while (i<total)
	{
		if(num%2==0)
		{
			printf("%d, ", num);
		}
		i++;
		num--;
	
	}
}
