/*Desenvolva um algoritmo que
calcule o consumo de combust�vel de um
autom�vel em determinada viagem. Para isso,
devem ser obtidos: i) o percurso (em
quil�metros) da viagem; ii) o n�mero de
quil�metros que o carro percorre com um litro
de combust�vel (km/l); e iii) o pre�o do litro do
combust�vel.
Ao final, o algoritmo deve determinar:
� A quantidade de combust�vel, em litros,
consumida durante a viagem;
� O custo total de combust�vel.*/
#include<stdio.h>
int main()
{
//declara��o de vari�veis
float Totalpercurso, Kmporlitro, Precolitro, Totalcomb, Totalcusto;

printf("Informe o tamanho do percurso em quilometros: ");
scanf("%f", &Totalpercurso);

printf("Informe quantos quilometros o carro percorre com um litro: ");
scanf("%f", &Kmporlitro);

printf("Informe p preco do litro do combustivel: ");
scanf("%f", &Precolitro);

Totalcomb=Totalpercurso/Kmporlitro;
Totalcusto=Totalcomb*Precolitro;

printf("A quantidade de combustivel gasto na viagem, em litros, e de %0.2f.\n O consumo total de combustivel na viagem foi de %0.2f reais.", Totalcomb, Totalcusto);
}
