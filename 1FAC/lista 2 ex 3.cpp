/*As vendas parceladas se
tornaram uma �tima op��o para os lojistas que,
a cada dia, criam novas promo��es para tentar
conquistar novos clientes. Fa�a um algoritmo
que permita ao lojista informar o pre�o do
produto e receber as seguintes informa��es:
a) O valor com 10% de desconto para
pagamento � vista;
b) O valor da presta��o para parcelamento
sem juros, em 5x;
c) O valor da presta��o para parcelamento
com juros, em 10x, com 20% de acr�scimo
no valor do produto.*/
#include<stdio.h>


int main()
{
//declara��o de variaveis
float PrecoP, Precovista, Vprestcinc, Vjuros, Vprestdez;

//recebendo pre�o
printf("Digite o preco do produto: ");
scanf("%f", &PrecoP);

Precovista=PrecoP/10;
Precovista=PrecoP-Precovista;
Vprestcinc=PrecoP/5;
Vjuros=PrecoP*2;
Vjuros=Vjuros/10;
Vprestdez=Vjuros+PrecoP;
Vprestdez=Vprestdez/10;

printf("O valor pago a vista com desconto e de %0.2f reais.\nO valor da prestac�o para parcelamento em 5x e de %0.2f reais.\nE o valor da prestac�o para parcelamento em 10x, com 20 por cento de juros e de %0.2f reais.", Precovista, Vprestcinc, Vprestdez);
}
