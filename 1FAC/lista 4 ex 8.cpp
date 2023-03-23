/*Em uma empresa deseja-se
fazer um levantamento sobre algumas
informações dos seus 250 funcionários. Cada
funcionário deverá responder um
questionário ao qual informará os seguintes
dados: matrícula, gênero, idade, salário e
tempo (em anos) de trabalho na empresa. A
execução do programa deve exibir os
seguintes itens:
a) Quantidade de funcionários que
ingressaram na empresa com menos
de 21 anos;
b) Quantidade de funcionários do
gênero feminino;
c) Média salarial dos homens;
d) Matrícula dos funcionários mais
antigo e mais novo.*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
int i=0, quantFunF, tempoAn, matricula, idade, quantNovos=0, quantM=0, quantH=0, tempoAntigo=0, matriculaAntiga, tempoNovo=100, matriculaNova;
char genero;
float salario=0, mediaSalarioH, salarioTotal;

while(i<3)
{
	printf("\nDigite sua matricula: ");
	scanf("%d", &matricula);
	
	printf("Digite seu genero(F para feminino e M para mascuino): ");
	fflush(stdin);
	scanf("%c", &genero);
	
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	
	printf("Digite seu salario: ");
	scanf("%f", &salario);
	
	printf("Digite o seu tempo na empresa(em anos): ");
	scanf("%d", &tempoAn);
	
	if(idade<21)
	{
		quantNovos++;
	}
	if(genero=='F')
	{
		quantM++;
	}
	if(genero=='M')
	{
		salarioTotal=salarioTotal+salario;
		quantH++;
	}
	if(tempoAntigo<tempoAn)
	{
		tempoAntigo=tempoAn;
		matriculaAntiga=matricula;
	}
	if(tempoNovo>tempoAn)
	{
		tempoNovo=tempoAn;
		matriculaNova=matricula;
	}
	i++;
}
mediaSalarioH=salarioTotal/quantH;

printf("A quantidade de funcionarios que ingressaram na empresa com menos de 21 anos e de %d\n", quantNovos);
printf("Quantidade de funcionarios do genero feminino e de %d\n", quantM);
printf("A media de salario dos homens e de %0.2f\n", mediaSalarioH);
printf("A matricula do funcionario mais antigo e %d e a do mais novo e %d\n", matriculaAntiga, matriculaNova);
}
