/*Faça um algoritmo para calcular a conta final de
um hóspede de um hotel, considerando que:
a) Devem ser obtidos o nome do hóspede, o
tipo do apartamento utilizado (A, B, C ou D),
o número de diárias utilizadas pelo hóspede
e o valor do consumo interno do hóspede;
b) O valor da diária é determinado pela
seguinte tabela:
c) O valor da taxa de serviço equivale a
10% da conta.
A conta a ser apresentada ao cliente deve
conter: o nome do hóspede, o tipo do
apartamento, o valor total das diárias, o
valor do consumo interno, o subtotal, o
valor da taxa de serviço e o total geral.*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
//declaração de variaveis
int NumD;
char nome, tipoapt;
float ConsInt, valortaxa, subtotal, totalfinal, totaldiaria, ValorD;


//pedindo informações ao cliente
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
printf("Valor da taxa de serviço de %0.2f reais\n", valortaxa);
printf("O valor do servivo total de %0.2f reais", totalfinal);		


}
