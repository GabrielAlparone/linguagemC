/*As vendas parceladas se
tornaram uma ótima opção para os lojistas que,
a cada dia, criam novas promoções para tentar
conquistar novos clientes. Faça um algoritmo
que permita ao lojista informar o preço do
produto e receber as seguintes informações:
a) O valor com 10% de desconto para
pagamento à vista;
b) O valor da prestação para parcelamento
sem juros, em 5x;
c) O valor da prestação para parcelamento
com juros, em 10x, com 20% de acréscimo
no valor do produto.*/
#include<stdio.h>


int main()
{
//declaração de variaveis
float PrecoP, Precovista, Vprestcinc, Vjuros, Vprestdez;

//recebendo preço
printf("Digite o preco do produto: ");
scanf("%f", &PrecoP);

Precovista=PrecoP/10;
Precovista=PrecoP-Precovista;
Vprestcinc=PrecoP/5;
Vjuros=PrecoP*2;
Vjuros=Vjuros/10;
Vprestdez=Vjuros+PrecoP;
Vprestdez=Vprestdez/10;

printf("O valor pago a vista com desconto e de %0.2f reais.\nO valor da prestacão para parcelamento em 5x e de %0.2f reais.\nE o valor da prestacão para parcelamento em 10x, com 20 por cento de juros e de %0.2f reais.", Precovista, Vprestcinc, Vprestdez);
}
