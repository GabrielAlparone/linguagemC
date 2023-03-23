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
		mes=mes-2;
		total=31*mes;
		total=total+dia;
		total=total+28;
		switch (mes+2)
{
	case 3 :
	printf("%d° dia do ano: ", total);
	break;
	
	case 4 :
	printf("%d° dia do ano: ", total);
	break;
	
	case 5 :
	total=total-1;
	printf("%d° dia do ano: ", total);
	break;
	
	case 6 :
	total=total-1;
	printf("%d° dia do ano: ", total);
	break;
	
	case 7 :
	total=total-1;
	printf("%d° dia do ano: ", total);
	break;
	
	case 8 :
	total=total-1;
	printf("%d° dia do ano: ", total);
	break;
	
	case 9 :
	total=total-2;
	printf("%d° dia do ano: ", total);
	break;
	
	case 10 :
	total=total-2;
	printf("%d° dia do ano: ", total);
	break;
	
	case 11 :
	total=total-2;
	printf("%d° dia do ano: ", total);
	break;
	
	case 12 :
	total=total-3;
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
						
						switch(mes+2)
						{
						case 3 :
						printf("%d° dia do ano: ", total);
						break;
	
						case 4 :
						printf("%d° dia do ano: ", total);
						break;
	
						case 5 :
						total=total-1;
						printf("%d° dia do ano: ", total);
						break;
	
						case 6 :
						total=total-1;
						printf("%d° dia do ano: ", total);
						break;
	
						case 7 :
						total=total-1;
						printf("%d° dia do ano: ", total);
						break;
					
						case 8 :
						total=total-1;
						printf("%d° dia do ano: ", total);
						break;
	
						case 9 :
						total=total-2;
						printf("%d° dia do ano: ", total);
						break;
	
						case 10 :
						total=total-2;
						printf("%d° dia do ano: ", total);
						break;
	
						case 11 :
						total=total-3;
						printf("%d° dia do ano: ", total);
						break;
	
						case 12 :
						total=total-4;
						printf("%d° dia do ano: ", total);
						break;
					}
					}
						else
							if (mes<2)
							{
								printf("%d° dia do ano", dia);
							}
	

}
