/*Fazer um algoritmo que determine a ordem de
uma data (dia e mês) no ano.
Exemplos:
01/01 - 1o dia do ano
03/02 - 34o dia do ano
6 meses com 30, 5 com 31 e 1 com 28/29*/
#include<stdio.h>

int main ()
{

//declaração de variáveis
int dia, mes, ano, total=0;

//informações do cliente

printf("digite o dia do mes: ");
scanf("%d", &dia);

printf("digite o mes do ano: ");
scanf("%d", &mes);

printf("digite o ano: ");
scanf("%d", &ano);


	if (( mes>2) && (ano%4!=0))
	{
		
		switch (mes)
{
	case 3 :
		mes=mes-2;
		total=31*mes;
		total=total+dia;
		total=total+28;
	printf("%d° dia do ano: ", total);
	break;
	
	case 4 :
		mes=mes-2;
		total=31*mes;
		total=total+dia;
		total=total+28;
	printf("%d° dia do ano: ", total);
	break;
	
	case 5 :
		mes=mes-2;
		total=31*mes;
		total=total+dia;
		total=total+28;
		total=total-1;
	printf("%d° dia do ano: ", total);
	break;
	
	case 6 :
		mes=mes-2;
		total=31*mes;
		total=total+dia;
		total=total+28;
		total=total-1;
	printf("%d° dia do ano: ", total);
	break;
	
	case 7 :
		mes=mes-2;
		total=31*mes;
		total=total+dia;
		total=total+28;
		total=total-1;
	printf("%d° dia do ano: ", total);
	break;
	
	case 8 :
		mes=mes-2;
		total=31*mes;
		total=total+dia;
		total=total+28;
		total=total-1;
	printf("%d° dia do ano: ", total);
	break;
	
	case 9 :
		mes=mes-2;
		total=31*mes;
		total=total+dia;
		total=total+28;
		total=total-2;
	printf("%d° dia do ano: ", total);
	break;
	
	case 10 :
		mes=mes-2;
		total=31*mes;
		total=total+dia;
		total=total+28;
		total=total-2;
	printf("%d° dia do ano: ", total);
	break;
	
	case 11 :
		mes=mes-2;
		total=31*mes;
		total=total+dia;
		total=total+28;
		total=total-3;
	printf("%d° dia do ano: ", total);
	break;
	
	case 12 :
		mes=mes-2;
		total=31*mes;
		total=total+dia;
		total=total+28;
		total=total-4;
	printf("%d° dia do ano: ", total);
	break;
}
	}
		else
			if (mes==2) 
			{
				total=31+dia;
				printf("%d° dia do ano", total);
			}
				else
					if ((mes>2) && (ano%4==0))
					{
						mes=mes-2;
						total=31*mes;
						total=total+29;
						total=total+dia;
						printf("%d° dia do ano", total);
					}
						else
							if (mes<2)
							{
								printf("%d° dia do ano", dia);
							}
	

}



