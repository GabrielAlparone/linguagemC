/*Escrever um algoritmo que, dada uma quantia
em reais, calcule o menor número possível de
notas/moedas (200, 100, 50, 20, 10, 5, 2 e 1) em que
o valor pode ser decomposto.*/
#include<stdio.h>

int main()
{
//declaração de variáveis
int Vcliente, Tduz, Tcem, Tcinq, Tvin, Tdez, Tcin, Tdoi, Tum, resto=0, Tnotas;

//recebendo numero total da quantia
printf("digite o valor desejado para saque: ");
scanf("%d", &Vcliente);

//calculo
	Tduz=Vcliente/200;
	resto=Vcliente%200;
	Tcem=resto/100;
	resto=resto%100;
	Tcinq=resto/50;
	resto=resto%50;
	Tvin=resto/20;
	resto=resto%20;
	Tdez=resto/10;
	resto=resto%10;
	Tcin=resto/5;
	resto=resto%5;
	Tdoi=resto/2;
	Tum=resto%2;
	Tnotas=Tduz+Tcem+Tcinq+Tvin+Tdez+Tcin+Tdoi+Tum;
	
	printf("%d nota(s) de 200,\n %d nota(s) de 100,\n %d nota(s) de 50,\n %d nota(s) de 20,\n %d nota(s) de 10,\n %d nota(s) de 5,\n %d nota(s) de 2,\n %d moeda(s) de 1\n O valor total de notas e de %d", Tduz, Tcem, Tcinq, Tvin, Tdez, Tcin, Tdoi, Tum, Tnotas);

}
