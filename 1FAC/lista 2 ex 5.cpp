/*Escrever um algoritmo que obtenha o código
do item pedido, a quantidade e calcule o valor
a ser pago.
Considere que, a cada execução do algoritmo,
somente será calculado o valor relacionado a
um item.*/
#include<stdio.h>
#include<stdlib.h>

int main ()
{
//declaração de variáveis
int codigo=1, quant;
float preco, total;

while(codigo!=0)
	{
	//recebendo pedido
	printf("Informe o codigo do produto: ");
	scanf("%d", &codigo);
	if(codigo!=0)
	{
	printf("Digite a quantidade de produtos: ");
	scanf("%d", &quant);
	}
	if(codigo==100)
	{
		preco=3.50;
	}
		else
			if(codigo==101)
			{
				preco=4.50;
			}
				else
					if(codigo==102)
					{
						preco=5.20;
					}
						else
							if(codigo==103)
							{
								preco=3;
							}
								else
									if(codigo==104)
									{
										preco=4;
									}
										else
											if(codigo==105)
											{
												preco=2.50;
											}
	total=preco*quant;
	if(codigo!=0)
	{
	printf("o valor a ser pago e de %0.2f reais.\n", total);
	}
	}

}

