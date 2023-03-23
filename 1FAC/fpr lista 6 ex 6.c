/*Considere uma loja que mant�m em uma
matriz o total vendido por cada funcion�rio
pelos diversos meses do ano. Ou seja, uma
matriz de 12 linhas (uma por m�s) e 10 colunas
(10 funcion�rios). Pede-se o desenvolvimento
de uma fun��o para cada item abaixo:

a. Calcular o total vendido durante o ano;

b. Dado um m�s fornecido pelo usu�rio,
determinar o total vendido nesse m�s;

c. Dado um funcion�rio fornecido pelo
usu�rio, determinar o total vendido por ele
durante o ano;

d. Determinar o m�s com maior �ndice de
vendas;

e. Determinar o funcion�rio que menos
vendeu durante o ano.*/
#include<stdio.h>
#include<stdlib.h>
#DEFINE 
#DEFINE 
//fun��o a
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
//fun��o b
float totalvendidomes (float vendas[meses][funcionarios], int mes)
{
	int j;
	dloat soma = 0;
	//convertendo m�s de 1...12 para 0 .... 11
	mes--;
	for(j=0;j<funcionarios;j++)
	{
		soma = soma + vendas[mes][j]; 
	}
	return soma;
}

//fun��o c
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

//fun��o d
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

//fun��o e

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
