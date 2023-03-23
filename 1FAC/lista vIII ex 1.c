/*Dados três números inteiros a, b e c,
implementar um programa que exiba os
números do intervalo definido por a e b
(sempre começando em a e terminando em b),
com exceção daqueles que sejam múltiplos de
c.
Exemplos:
a = 10, b = 20, c = 3
Saída: 10, 11, 13, 14, 16, 17, 19, 20
a = 25, b = 18, c = 5
Saída: 24, 23, 22, 21, 19, 18
Nota: devem ser apresentadas três versões do
programa, uma para cada estrutura de
repetição estudada.*/
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
