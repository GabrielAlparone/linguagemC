/*Fa�a um programa que, dadas duas datas (cada
qual com dia, m�s e ano) fornecidas pelo
usu�rio, determine qual delas � a mais recente.*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
//declara��o de variaveis
int dia1, dia2, mes1, mes2, ano1, ano2;

//recebendo datas
printf("Determine a primeira data\nDia: ");
scanf("%d", &dia1);

printf("Mes: ");
scanf("%d", &mes1);

printf("Ano: ");
scanf("%d", &ano1);

printf("Determine a segunda data\nDia: ");
scanf("%d", &dia2);

printf("Mes: ");
scanf("%d", &mes2);

printf("Ano: ");
scanf("%d", &ano2);
if(ano1>ano2)
{
	printf("a data mais recente e %d/%d/%d", dia1, mes1, ano1);
}
	else
		if(ano2>ano1)
		{
			printf("a data mais recente e %d/%d/%d", dia2, mes2, ano2);
		}
			else
				if(mes1>mes2)
				{
					printf("a data mais recente e %d/%d/%d", dia1, mes1, ano1);
				}
					else
						if(mes2>mes1)
						{
							printf("a data mais recente e %d/%d/%d", dia2, mes2, ano2);
						}
							else
								if(dia1>dia2)
								{
									printf("a data mais recente e %d/%d/%d", dia1, mes1, ano1);
								}
									else
										if(dia2>dia1)
										{
											printf("a data mais recente e %d/%d/%d", dia2, mes2, ano2);	
										}
}
