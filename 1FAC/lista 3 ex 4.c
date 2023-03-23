/*Implementar um programa que leia um valor
inteiro n1. Se este não estiver no intervalo de
100 a 999, uma mensagem deve ser exibida ao
usuário informando que o número é inválido e,
em seguida, a execução do programa terminará.
Caso o valor esteja no intervalo definido, o

programa deverá criar um novo valor n2 (e exibi-
lo ao final) contendo os mesmos algarismos de

n1, porém em ordem crescente.
Exemplos:
n1 514
n2 145
n1 929
n2 299
n1 124
n2 124
Nota:
Como definido no enunciado, n1 consiste em um
número inteiro positivo, com 3 algarismos. n2
também será um único número!*/
#include<stdio.h>
#include<stdlib.h>

int main ()
{
//declaração de variáveis
int n1, centalg, dezalg, unialg, resto, n2, dezmult;

//recebendo valores
printf("Digite um valor inteiro de 3 algarismos, positivo: ");
scanf("%d", &n1);

if((n1>=100) && (n1<=999))
{
	centalg=n1/100;
	resto=n1%100;
	dezalg=resto/10;
	unialg=resto%10;
	n2=centalg*100;
	dezmult=dezalg*10;
	n2=n2+dezmult;
	n2=n2+unialg;
	
	printf("n2 = %d", n2);
}
else
printf("o numero e invalido");

}
