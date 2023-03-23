/*: : Uma determinada empresa fez
uma pesquisa de mercado para saber se as
pessoas gostaram ou não de um novo
produto que foi lançado. Para cada pessoa
entrevistada foram coletados os seguintes
dados: gênero (M ou F) e resposta (G
[Gostou] ou N [Não Gostou]). Sabendo-se
que foram entrevistadas X pessoas, faça um
programa que forneça:
a) Número de pessoas que gostaram do
produto;
b) Número de pessoas que não
gostaram do produto;
c) Informação dizendo em que gênero
o produto teve uma melhor
aceitação.*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
int nument, i=0, quantha=0, quantma=0, gostou=0, naogostou=0 ;
char Gent, respent, F, G, M, N;
printf("Digite quantas pessoas foram entrevistadas: ");
scanf("%d", &nument);

while(i<nument)
{
	printf("Digite o genero do entrevistado(F para feminino M para masculino); ");
	fflush(stdin);
	scanf("%c", &Gent);
	printf("Digite a resposta do entrevistado (G para gostou ou N para nao gostou): ");
	fflush(stdin);
	scanf("%c", &respent);
	if((Gent=='F')&&(respent=='G'))
	{
		quantma++;
	}
	else if((Gent=='M')&&(respent=='G'))
	{
		quantha++;
	}
	if(respent=='G')
	{
		gostou++;
	}
	else if(respent=='N')
	{
		naogostou++;
	}
	i++;
}
if(quantma>quantha)
{
	printf("As mulheres tiveram uma melhor aceitacao ao produto.\n");
}
else if(quantha>quantma)
{
	printf("Os homens tiveram uma melhor aceitacao ao produto.\n");
}
else if (quantha==quantma)
{
	printf("ambos os generos tiveram a mesma aceitação ao produto.\n");
}
printf("O numero de pessoas que nao gostaram e %d.\n", naogostou);
printf("O numero de pessoas que gostaram e %d.\n", gostou);
}
