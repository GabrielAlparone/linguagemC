/*Construir um programa que permita ao usuário
calcular a área de uma figura geométrica. Para
isto, o usuário deverá escolher a figura desejada
([C]írculo, [R]etângulo, [Q]uadrado ou
[T]riângulo) e fornecer as informações
necessárias para que a área desta figura possa
ser calculada.
Notas:
1. Fórmulas para o cálculo das áreas:
a. Acírculo = p.raio2

, onde p = 3.14159;

b. Aretângulo = base.altura;
c. Aquadrado = lado2
;
d. Atriângulo = (base.altura)/2.
2. Caso o usuário escolha uma opção inválida,
uma mensagem de erro deve ser exibida e a
execução do programa terminada.*/
#include<stdio.h>
int main ()
{
//declaraão de variáveis
char fig, C, R, Q, T;
float raio, areacirc, baseretan, alturaretan, arearetan, lado, areaqua, basetri, alturatri, areatri;

//recebendo informações
printf("Escolha a figura desejada: ");
scanf("%c", &fig);

if(fig=='C')
{
	printf("Determine o raio do circulo em cm: ");
	scanf("%f", &raio);
	
	areacirc=raio*raio;
	areacirc=areacirc*3.14159;
	
	printf("A area do circulo e de %0.1f cm.", areacirc);
}
	else if(fig=='R')
	{
		printf("Determine a base do retangulo em cm: ");
		scanf("%f", &baseretan);
		
		printf("Determine a altura do retangulo em cm: ");
		scanf("%f", &alturaretan);
		
		arearetan=alturaretan*baseretan;
		
		printf("a area do retangulo e de %0.1f cm", arearetan);
	}
		else if(fig=='Q')
		{
			printf("Determine o lado do quadrado em cm: ");
			scanf("%f", &lado);
			areaqua=lado*lado;
			printf("a area do quadrado e de %0.1f cm", areaqua);
		}
			else if(fig=='T')
			{
				printf("Determine a base do triangulo em cm: ");
				scanf("%f", &basetri);
				
				printf("Determine a altura do triangulo em cm: ");
				scanf("%f", &alturatri);
				areatri=basetri*alturatri;
				areatri=areatri/2;
				printf("a area do triangulo e de %0.1f cm.", areatri);
			}
}
