/*Implementar uma função que, dadas duas
strings s1 e s2, crie uma nova string – s3 –
contendo todos os caracteres de s1 que não
estejam em s2.
Nota: em s3, não devem existir caracteres
repetidos.*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int buscar (char s1[], char ch)
{
	int i;
	
	for (i=0; s1[i]; i++)
	{
		if (s1[i] == ch)
		{
			return i;
		}
	}
	return -1;
}
void nwstrng(char s1[], char s2[], char s3[])
{
	int i, j=0;
	s3[0] = '\0';
	for (i=0; s1[i]; i++)
	{
		if (buscar(s3,s1[i]<0) && (s2, s1[i] < 0))
		{	
			s3[j] = s1[i];
			s3[i+j] = '\0';
			j++;
		}
	}
}
void main()
{
	char s1[100], s2[100], s3[100];
	
	printf("Determine a primeira string: ");
	gets(s1);
	printf("Determine a segunda string: ");
	gets(s2);
	nwstrng(s1, s2, s3);
	printf("%s, %s, %s", s1, s2, s3);
	
}
