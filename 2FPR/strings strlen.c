//strlen
#include<stdio.h>
int tamanho(char s[])
{
	int i, quant=0;
	
	for(i=0;s[i]!='\0';i++)
	{
		quant++;
	}
return quant;
}
void main()
{
	int resposta;
	char s[50];
	printf("entre com a STRING ");
	gets(s);
	resposta = tamanho(s); 
	printf("%d", resposta);
}
