#include<stdio.h>
int main ()
{
	//Declaração de variáveis
	int n1, n2, cont=0, menor, i;
	
	//lendo os dois valores de entrada
	printf ("Entre com o primeiro numero: ");
	scanf ("%d", &n1);
	
	printf ("Entre com o segundo numero: ");
	scanf ("%d", &n2);
	
	//verificando qual é o menor valor entre 'n1' e 'n2'
	if (n1 < n2)
	{
		menor = n1;
	}
	else
	{
		menor = n2;
	}
	
	//variando o intervalo de 2 a 'menor' (excluindo o 1, em função do especificado no enunciado)
	for (i=2;i<=menor;i++)
	{
		//verificando se 'i' é divisor tanto de 'n1' quanto de 'n2'
		if ((n1%i==0) && (n2%i==0))
		{
			//contando o número de divisores comuns a 'n1' e 'n2'
			cont++;
		}
	}
	
	//verificando se foi encontrado algum divisor comum (e, portanto, 'n1' e 'n2' não são primos entre si)
	if (cont > 0)
	{
		printf ("\n\nOs numeros %d e %d nao sao primos entre si!", n1, n2);
	}
	else
	{
		printf ("\n\nOs numeros %d e %d sao primos entre si!", n1, n2);
	}
}
