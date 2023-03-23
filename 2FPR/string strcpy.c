//strcpy
#include<stdio.h>
void strcpy(char s1[], char s2[])
{
	int i;
	for(i=0;s2[i]!='\0';i++)
	{
		s1[i] = s2[i];
	}
	s1[i]='\0';
}
void main()
{
	char string1[20], string2[20];
	
	printf("entre com uma palavra: ");
	fflush(stdin);
	gets(string2); //scanf("%s", string2)
	
	copiar(string1, string2);
	
	printf("string1= %s e string2 %s", string1, string2);
}
