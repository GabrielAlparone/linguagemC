/*Escrever um algoritmo que
obtenha o peso de uma pessoa na Terra e o
número de um planeta. Ao final, com auxílio da
tabela abaixo, calcular o peso desta pessoa no
planeta escolhido.*/
#include<stdio.h>
#include<stdlib.h>

int main ()
{
//declaração de variáveis
float pesoterra, Grelativa, pesototal;
int planeta;
//recebendo informações
printf("Digite o seu peso na terra: ");
scanf("%f", &pesoterra);

printf("Digite o numero do planeta: ");
scanf("%d", &planeta);

if(planeta==1)
{
	Grelativa=0.37;
}
	else
		if(planeta==2)
		{
			Grelativa=0.88;
		}
			else
				if(planeta==3)
				{
					Grelativa=0.38;
				}
					else
						if(planeta==4)
						{
							Grelativa=2.64;
						}
							else
								if(planeta==5)
								{
									Grelativa=1.15;
								}
									else
										if(planeta==6)
										{
											Grelativa=1.17;
										}
pesoterra=pesoterra/10;
pesototal=pesoterra*Grelativa;

printf("o seu peso no planeta %d e de %0.2f kg.", planeta, pesototal);
}
