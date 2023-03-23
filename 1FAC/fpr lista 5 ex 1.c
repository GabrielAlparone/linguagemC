/*Implementar uma função que, dada uma string
s, determine a quantidade de caracteres
distintos em s.*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int string(char palavra[])
{
	int i, j, quant=0, numero;
	for (i=0; palavra[i]; i++)
	{
		numero=0;
		for (j=(i+1); palavra[j] ; j++)
		{
			if (palavra [i] == palavra [j])
			{
				numero++;
				break;
			}
		}
		if (numero == 0)
		{
			quant++;
			
		}
	}
	return quant;
}
void main ()
{
	char palavra[100];
	int quantidade;
	
	printf("Determine a string: \n");
	fflush (stdin);
	gets(palavra);
	quantidade = string(palavra);
	printf("A string tem %d caracteres diferentes.", quantidade);
	
}
