/*Na matem�tica, dois n�meros s�o chamados de
primos entre si quando o seu �nico divisor em
comum � a unidade (ou seja, o n�mero 1).
Considerando este conceito, implementar um
programa que, dados dois n�meros inteiros,
determine se s�o ou n�o primos entre si.*/
#include<stdio.h>

void main ()
{
	int num1, num2, i, resultadomaior, resultadomenor, menor, quant=0;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &num1);
	
	printf("Digite o segundo numero: ");
	scanf("%d", &num2);
	
	if (num1<num2)
	{
		menor=num1;
	}
	else 
	menor=num2;
	
	for(i=2; i<=menor;i++)
	{
		if ((num1%i==0) && (num2%i==0))
		quant++;
		
	}
	if(quant>0)
	{
		printf("Os numeros %d e %d nao sao primos entre si.", num1, num2);
	}
	else
	printf("Os numeros %d e %d s�o primos entre si", num1, num2);
}



















