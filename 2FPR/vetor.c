//strings = vetor de caracteres
//char nome[50]
//lembrar do \0, para n�o ter lixo de mem�ria, ele sempre precisa existir
//dado uma string, exiba ela de r�s para frente
#include<stdio.h>
#include<string.h>
//fun��es de string. 
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


