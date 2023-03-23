/*O custo ao consumidor de um carro novo é a
soma do custo de fábrica com a porcentagem
do distribuidor e dos impostos (aplicados ao
custo de fábrica). Desenvolver um algoritmo
que calcule o custo ao consumidor de
determinado carro.*/
#include<stdio.h>

int main()
{
//declaração de variaveis
float custcons, custfab, porcdist, totaldist, totalimp, porcimp;

//recebendo valores
printf("determine o custo de fabrica do carro: ");
scanf("%f", &custfab);

printf("determine a porcentagem do distribuidor: ");
scanf("%f", &porcdist);

printf("determine a porcentagem de imposto: ");
scanf("%f", &porcimp);

//calculando o total
totaldist=custfab*porcdist;
totaldist=totaldist/100;
totalimp=custfab*porcimp;
totalimp=totalimp/100;
custcons=custfab+totaldist;
custcons=custcons+totalimp;


printf("o custo do caro ao consumidor e de %0.1f reais", custcons);

}
