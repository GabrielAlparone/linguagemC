/*Dados tr�s n�meros inteiros a, b e c,
implementar um programa que exiba os
n�meros do intervalo definido por a e b
(sempre come�ando em a e terminando em b),
com exce��o daqueles que sejam m�ltiplos de
c.
Exemplos:
a = 10, b = 20, c = 3
Sa�da: 10, 11, 13, 14, 16, 17, 19, 20
a = 25, b = 18, c = 5
Sa�da: 24, 23, 22, 21, 19, 18
Nota: devem ser apresentadas tr�s vers�es do
programa, uma para cada estrutura de
repeti��o estudada.*/
#include<stdio.h>

void main ()
{
	int numa, numb, numc;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &numa);
	
	printf("Digite o segundo numero: ");
	scanf("%d", &numb);
	
	printf("Digite o terceiro numero: ");
	scanf("%d", &numc);
	
	for(numa; numa<=numb; numa++)
	{
		if(numa%numc!=0)
		{
			printf("%d, ", numa);
		}
	}
}
