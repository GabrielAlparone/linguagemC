/*Faça um programa que exiba
na tela os 50 primeiros termos da seguinte
série: 1, -2, 3, -4, 5, -6 ...*/
#include<stdio.h>
int main()
{
//declaração de variáveis
int valor1=1, valor2=-2;

//contas
while(valor1<51)
{
printf("%d, %d, ", valor1, valor2);
valor1=valor1+2;
valor2=valor2-2;

}
}
