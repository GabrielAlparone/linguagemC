/*Desenvolver um programa que calcule a
soma dos n�meros de 1 a N, sendo N um
n�mero inteiro fornecido pelo usu�rio.*/
#include<stdio.h>
int main()
{
	int num, soma, i=0, cresc=0, cresctotal=0;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	while(i<num+1)
	{
		cresctotal=cresctotal+cresc;
		cresc++;
		i++;
	}
	printf("A soma dos numeros menores que %d e %d", num, cresctotal);
}
