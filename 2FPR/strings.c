//strings = vetor de caracteres
//char nome[50]
//lembrar do \0, para não ter lixo de memória, ele sempre precisa existir
//dado uma string, exiba ela de rás para frente
#include<stdio.h>
#include<string.h>
//funções de string. 
//strlen(s)= retornar quantidade de caracteres em uma string.
//strcpy(s)= copia uma string para a outra
//strcat(s)= junta duas strings em uma
//strcmp(s)=compara duas strings
void invertido(char s[])
{
	int i, quant=strlen(s);
	for(i=quant-1;i>=0;i--)
	{
		print ("%c, ", s[i]);
	}
}


