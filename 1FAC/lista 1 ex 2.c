/*Elabore um algoritmo que, dada a idade de um
nadador, classifique-o em uma das seguintes
categorias:*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
//declaração de variaveis
int idade;

//pedindo idade ao cliente

printf("digite a idade do nadador: ");
scanf("%d", &idade);

//condições
if((idade>0) && (idade<=4))
{
	printf("o nadador ira ficar na turma infantil A");
}
	else
		if ((idade>=5) && (idade<=7))
		{
			printf("o nadador ira ficar na turma infantil B");
		}
		else
			if((idade>=8) && (idade<=10))
			{
				printf("o nadador ira ficar na turma infantil C");
			}
				else
					if((idade>=11) && (idade<=13))
					{
						printf("o nadador ira ficar na turma juvenil A");
					}
						else
							if((idade>=14) && (idade<=17))
							{
								printf("o nadador ira ficar na turma juvenil B");
							}
								else
									if(idade>=18)
									{
										printf("o nadador ira ficar na turma adulto");
									}
}

