#include<stdio.h>

float fatorial (int b)
{
	int  i=1;
	
	for (b; b>1;b--)
	{
		i = i*b;
	}
	
	return i;
}
float subtracao(int N, int valor)
{
	int total;
	total = N - valor;
	
	return total;
}
void principal ()
{
	float N, b, valor = 1, totalsubtracao, sinal = 1;
	float S, divisao, totaldivisao = 0;
	
	printf("Digite um numero inteiro: ");
	scanf("%f", &N);
	 for (b=2; b<=N; b++)
	 {
	 	totalsubtracao = subtracao(N, valor);
	 	valor++;
	 	divisao = totalsubtracao / fatorial(b);
	 	if(sinal>0)
	 	{
	 		totaldivisao = totaldivisao + divisao;
		}
		else if(sinal<0)
		{
			totaldivisao = totaldivisao - divisao;
		}
		sinal = sinal * -1;
	 }
	 S = N - totaldivisao;
	 
	 printf("O resultado e %f", S);
}
void main ()
{
	 principal();
}
