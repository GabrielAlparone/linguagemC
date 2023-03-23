#include<stdio.h>

void main()
{
//declaração de variaveis

int numdisc, codigo, terminoleitura=2, totalaprovado=0, totalAVF=0, totalreprovado=0, maiormedia=0, maiorcodigo, menormedia=11, menorcodigo;

float NotaAV1, NotaAV2, NotaAVF, mediatotal=0, Ncredito, mediatotalAVF, totalmediaponderada=0, NtotalCredito=0;



while(terminoleitura!=1)
{
	printf("Para terminar a letura, Digite 1, para continuar, Digite outro valor.\n");
	scanf("%d", &terminoleitura);
if (terminoleitura!=1)
{
	
	numdisc++;
	
	printf("Digite o codigo: \n");
	scanf("%d", &codigo);
	
	printf("Digite o numero de creditos: \n");
	scanf("%f", &Ncredito);
	
	printf("Digite a nota da AV1: \n");
	scanf("%f", &NotaAV1);
	
	printf("Digite a nota da AV2: ");
	scanf("%f", &NotaAV2);
	
	mediatotal=NotaAV1+NotaAV2;
	mediatotal=mediatotal/2;
	mediatotal=mediatotal*Ncredito;
	totalmediaponderada=totalmediaponderada+mediatotal;
	
	if (maiormedia<mediatotal)
	{
		maiormedia=mediatotal;
		maiorcodigo=codigo;
	}
	if (menormedia>mediatotal)
	{
		menormedia=mediatotal;
		menorcodigo=codigo;
	}
	if(mediatotal>=6)
	{
		totalaprovado++;
	}
	else if(mediatotal<4)
	{
		totalreprovado++;
	}
	else if((mediatotal<6) && (mediatotal>=4))
	{
		printf("Digite a nota da AVF: ");
		scanf("%f", &NotaAVF);
	mediatotalAVF = mediatotal+ NotaAVF;
	mediatotalAVF = mediatotalAVF/2;
		totalAVF++;
			printf("A media do aluno com a prova final foi de %0.2f\n", mediatotalAVF);
	}
	totalmediaponderada=totalmediaponderada/numdisc;
	printf("A media do aluno sem prova final foi de %0.2f\n", mediatotal);

}
}
printf("O numero de disciplinas cursadas foi de %d\n", numdisc);
printf("O aluno foi aprovado sem prova final em %d disciplinas.\n", totalaprovado);
printf("O aluno foi reprovado sem direito a prova final em %d disciplinas.\n", totalreprovado);
printf("O aluno ficou em AVF em %d disciplinas\n", totalAVF);
printf("O codigo da disciplina em que o aluno obteve a maior nota foi %d\n", maiorcodigo);
printf("O codigo da disciplina em que o aluno obteve a menor nota foi %d\n", menorcodigo);
printf("O coeficiente de rendimento do aluno foi de %f", totalmediaponderada);
}

