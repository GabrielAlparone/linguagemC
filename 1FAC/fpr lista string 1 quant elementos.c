/*Suponha que não existissem as funções strlen,
strcpy, strcat e strcmp. Pede-se, então, a
implementação de funções que tenham o
mesmo objetivo daquelas.*/
#include <stdio.h>
#define quant 30
int string (char nome[])
{
	int i;
	for(i = 0;nome[i] != '\0'; i++);
	return i;
}
void main ()
{
	char nome [quant];
	printf("Determine a string: ");
	gets(nome);	
	printf("A string tem %d elementos. ", string (nome));
}

