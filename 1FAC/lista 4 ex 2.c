/*Faça um programa que exiba
todos os elementos da seguinte série, assim
como a soma destes elementos:
1, 50, 2, 49, 3, 48, 4, 47, 5, 46, ..., 49, 2, 50, 1*/
#include<stdio.h>
int main()
{
//declaração de variaveis
int maior=50, menor=1;

while(maior!=0)
{
	printf("%d %d ", maior, menor);
	menor++;
	maior--;
}
}
