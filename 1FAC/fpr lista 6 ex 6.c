/*Considere uma loja que mantém em uma
matriz o total vendido por cada funcionário
pelos diversos meses do ano. Ou seja, uma
matriz de 12 linhas (uma por mês) e 10 colunas
(10 funcionários). Pede-se o desenvolvimento
de uma função para cada item abaixo:

a. Calcular o total vendido durante o ano;

b. Dado um mês fornecido pelo usuário,
determinar o total vendido nesse mês;

c. Dado um funcionário fornecido pelo
usuário, determinar o total vendido por ele
durante o ano;

d. Determinar o mês com maior índice de
vendas;

e. Determinar o funcionário que menos
vendeu durante o ano.*/
#include<stdio.h>
#include<stdlib.h>
#DEFINE 
#DEFINE 
//função a
float totalvendido(float vendas[meses][funcionarios])
{
	int i, j;
	float soma = 0;
	for (i=0;i<meses;i++)
	{
		for(j=0;j<funcionarios;j++)
		{
			soma = soma + vendas[i][j];
		}
	}
	return soma;
}
//função b
float totalvendidomes (float vendas[meses][funcionarios], int mes)
{
	int j;
	dloat soma = 0;
	//convertendo mês de 1...12 para 0 .... 11
	mes--;
	for(j=0;j<funcionarios;j++)
	{
		soma = soma + vendas[mes][j]; 
	}
	return soma;
}

//função c
float totalvendidofuncionario(float vendas[meses][funcionarios], int funcionario)
{
	int i;
	float soma = 0;
	
//funcionario de 1 a 10 = funcionario 0 a 9
funcionario--;

	for (i=0;i<meses;i++)
	{
		soma = soma + vendas[i][funcionarios];
	}
	return soma;
}

//função d
int mesmaiorindicevendas(float vendas[meses][funcionarios])
{
	float maior = totalvendidomes(vendas, 1);//janeiro
	int i, mes = 1;
	float total;
	for (i = 2; i <= meses; i++)
	{
		total = totalvendidomes(vendas, i);
		if (total > maior)
		{
			maior = total;
			mes = i;
		}
	}
	return mes;
}

//função e

int funcionariomenorindicevendas(float vendas[meses][funcionarios])
{
	float menor = totalvendidofuncionario(vendas, 1);
	int j, funcionario = 1;
	float total;
	
	for (j = 2; j < funcionarios;j++)
	{
		total = totalvendidofuncionais(vendas, j);
		if (total < menor)
		{
			menor = total;
			funcionario = j;
		}
	}
	return funcionario;
}
