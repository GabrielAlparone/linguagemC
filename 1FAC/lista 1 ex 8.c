/*Fa�a um algoritmo para calcular a conta final de
um h�spede de um hotel, considerando que:
a) Devem ser obtidos o nome do h�spede, o
tipo do apartamento utilizado (A, B, C ou D),
o n�mero de di�rias utilizadas pelo h�spede
e o valor do consumo interno do h�spede;
b) O valor da di�ria � determinado pela
seguinte tabela:
c) O valor da taxa de servi�o equivale a
10% da conta.
A conta a ser apresentada ao cliente deve
conter: o nome do h�spede, o tipo do
apartamento, o valor total das di�rias, o
valor do consumo interno, o subtotal, o
valor da taxa de servi�o e o total geral.*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
//declara��o de variaveis
int NumD;
char nome, tipoapt;
float ConsInt, valortaxa, subtotal, totalfinal, totaldiaria, ValorD;


//pedindo informa��es ao cliente
printf("Digite o numero de diarias utilizadas: ");
scanf("%d", &NumD);

printf("Digite o tipo de apartamento utilizado: ");
fflush(stdin);
scanf("%c", &tipoapt);
toupper(tipoapt);
printf("Digite o valor do  consumo interno: ");
scanf("%f", &ConsInt);



//determinando valor das diarias
if(tipoapt = 'A')
{
	ValorD=350.0;
}
else if(tipoapt = 'B') {
	ValorD=275.0;
}
else if(tipoapt = 'C')	{
ValorD=200.0;
}
else if(tipoapt = 'D')	{
	ValorD = 150.0;
}


totaldiaria=ValorD*NumD;
subtotal=totaldiaria+ConsInt;
valortaxa=subtotal/10.0;
totalfinal=subtotal+valortaxa;

printf("Utilizou o apartamento %c\n", tipoapt);
printf("Valor total de diarias de %0.2f reais\n", totaldiaria);
printf("Valor de consumo interno de %0.2f reais\n", ConsInt);
printf("Subtotal com valor de %0.2f\n", subtotal);
printf("Valor da taxa de servi�o de %0.2f reais\n", valortaxa);
printf("O valor do servivo total de %0.2f reais", totalfinal);		


}
