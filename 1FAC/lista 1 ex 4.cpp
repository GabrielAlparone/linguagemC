/*Um banco conceder� um cr�dito especial aos
seus clientes, vari�vel com o saldo m�dio no
�ltimo ano. Fa�a um algoritmo que calcule o
valor do cr�dito de acordo com a tabela abaixo.*/
#include<stdio.h>

int main ()
{
//declara��o de variaveis
float SaldoM, pvin;
int Nsim;
//recebendo saldo medio

printf(" Digite o valor do saldo medio em reais: ");
scanf("%f", &SaldoM);

//calculando cr�dito especial
if (SaldoM<1000)
{
	printf("voce nao tem direito a credito especial");
}
	else
		if((SaldoM>=1000) && (SaldoM<1500))
		{
			pvin=SaldoM/5;
			printf("o seu credito especial e de %0.2f reais", pvin);
		}
			else
				if((SaldoM>=1500) && (SaldoM<2500))
				{
					pvin=SaldoM*3;
					pvin=pvin/10;
					printf("o seu credito especial e de %0.2f reais", pvin);
				}
					else
						if(SaldoM>2500)
						{
							pvin=SaldoM*4;
							pvin=pvin/10;
							printf("o seu credito especial e de %0.2f reais", pvin);
						}
}
