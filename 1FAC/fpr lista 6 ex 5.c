/*Implementar uma função que, dada uma matriz
M10×8, gere um vetor V de tamanho 8, onde
cada elemento do vetor consiste na soma dos
elementos de uma coluna de M. Ou seja, o
elemento V[0] consiste na soma dos elementos
da primeira coluna de M, o elemento V[1]
consiste na soma dos elementos da segunda
coluna de M, e assim por diante.*/
#include<stdlib.h>
#include<stdio.h>
#define L 10
#define C 8

void somacoluna(float M[L][C], float V[C])
{
	int i, j, soma = 0;
	for (j=0; j<C;j++)
	{
		soma=0;
		for (i=0;i<L;i++)
		{
			soma = soma+M[i][j];
		}
		V[j] = soma;
	}
}
void preencherMatriz (float M[L][C])
{
	//declaração de variáveis
	int i, j;
	
	srand (time(NULL));
	
	//varrendo as linhas da matriz
	for (i=0;i<L;i++)
	{
		//varrendo as colunas
		for (j=0;j<C;j++)
		{
			m[i][j] = rand () % 100;
		}
	}
}
void exibir (float M[L][C])
{
	//declaração de variáveis
	int i, j;
	
	printf ("\nElementos da matriz:\n\n");
	
	//varrendo as linhas da matriz
	for (i=0;i<L;i++)
	{
		//varrendo as colunas
		for (j=0;j<C;j++)
		{
			printf ("%5.1f ", M[i][j]);
		}
		
		printf ("\n");
	}
	
	printf ("\n\n");
}

void main()
{
	float M[L][C];
	preencherMatriz  (M[L][C]);
	exibir  (M[L][C]);
	
}

