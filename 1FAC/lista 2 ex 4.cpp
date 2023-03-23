/*Desenvolva um algoritmo que
calcule o consumo de combustível de um
automóvel em determinada viagem. Para isso,
devem ser obtidos: i) o percurso (em
quilômetros) da viagem; ii) o número de
quilômetros que o carro percorre com um litro
de combustível (km/l); e iii) o preço do litro do
combustível.
Ao final, o algoritmo deve determinar:
• A quantidade de combustível, em litros,
consumida durante a viagem;
• O custo total de combustível.*/
#include<stdio.h>
int main()
{
//declaração de variáveis
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
