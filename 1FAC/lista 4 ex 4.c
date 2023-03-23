/*Faça um programa que leia
300 números reais. Ao final, devem ser
exibidas as seguintes informações:
a) A quantidade de valores negativos
digitados;
b) A média dos valores positivos.*/
#include<stdio.h>
int main()
{
//declaração de variaveis
float real, mediareal;
int i=0, neg=0;
//recebendo valores
while(i<300)	{
	printf("Digite um numero: ");
	scanf("%f", &real);
	if(real<0)
	{
		neg++;
	}
	else if(real>0)
	{
		mediareal=real+real;
		i++;
	}

}
	mediareal=mediareal/300;
	printf(" a quantidade de valores negativos e de %d.\nA media de valores positivos e de %f", neg, mediareal);

}
