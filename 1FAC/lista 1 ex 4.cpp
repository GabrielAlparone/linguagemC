/*Um banco concederá um crédito especial aos
seus clientes, variável com o saldo médio no
último ano. Faça um algoritmo que calcule o
valor do crédito de acordo com a tabela abaixo.*/
#include<stdio.h>

int main ()
{
//declaração de variaveis
float SaldoM, pvin;
int Nsim;
//recebendo saldo medio

printf(" Digite o valor do saldo medio em reais: ");
scanf("%f", &SaldoM);

//calculando crédito especial
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
