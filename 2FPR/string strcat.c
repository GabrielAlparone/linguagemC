//strcat
#include<stdio.h>
void strcat(char s1[], char s2[])
{
	int i, j;
	for (i=0, j=tamanho (s1);s2[i]!='\0' ;i++, j++)
	{
		s1[j]=s2[i];
	}
	s1[j] = '\0';
}
