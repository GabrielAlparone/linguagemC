/*Construir um programa que permita ao usu�rio
calcular a �rea de uma figura geom�trica. Para
isto, o usu�rio dever� escolher a figura desejada
([C]�rculo, [R]et�ngulo, [Q]uadrado ou
[T]ri�ngulo) e fornecer as informa��es
necess�rias para que a �rea desta figura possa
ser calculada.
Notas:
1. F�rmulas para o c�lculo das �reas:
a. Ac�rculo = p.raio2

, onde p = 3.14159;

b. Aret�ngulo = base.altura;
c. Aquadrado = lado2
;
d. Atri�ngulo = (base.altura)/2.
2. Caso o usu�rio escolha uma op��o inv�lida,
uma mensagem de erro deve ser exibida e a
execu��o do programa terminada.*/
#include<stdio.h>
int main ()
{
//declara�o de vari�veis
char fig, C, R, Q, T;
float raio, areacirc, baseretan, alturaretan, arearetan, lado, areaqua, basetri, alturatri, areatri;

//recebendo informa��es
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
