/*Escrever um algoritmo que,
dados um número inteiro i e três valores a, b e
c, apresente os 3 números na ordem definida
por i, como descrito abaixo:
a) i = 1: os três valores em ordem crescente;
b) i = 2: os três valores em ordem decrescente;
c) i = 3: o maior valor deve ser apresentado no
meio dos outros.


*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
//declaração de variáveis
int valorordem;
float a, b, c;

//recebendo valores
printf("Determine um numero inteiro (1, 2, 3): ");
scanf("%d", &valorordem);

printf("Determine o primeiro valor: ");
scanf("%f", &a);

printf("Determine o segundo valor: ");
scanf("%f", &b);

printf("Determine o terceiro valor: ");
scanf("%f", &c);

if (valorordem==1)
{
	if((a<b) && (b<c))
	{
		printf("%0.1f, %0.1f, %0.1f", a, b, c);
	}
		else
			if((b<a) && (a<c))
			{
				printf("%0.1f, %0.1f, %0.1f", b, a, c);
			}
				else
					if((b<c) && (c<a))
					{
						printf("%0.1f, %0.1f, %0.1f", b, c, a);
					}
						else
							if((c<a) && (a<b))
							{
								printf("%0.1f, %0.1f, %0.1f", c, a, b);
							}
								else
									if((c<b) && (b<a))
									{
										printf("%0.1f, %0.1f, %0.1f", c, b, a);
									}
										else
											if((a<c) && (c<b))
											{
												printf("%0.1f, %0.1f, %0.1f", a, c, b);
											}		
}
	else
		if(valorordem==2)
		{
			if((a<b) && (b<c))
	{
		printf("%0.1f, %0.1f, %0.1f", c, b, a);
	}
		else
			if((b<a) && (a<c))
			{
				printf("%0.1f, %0.1f, %0.1f", c, a, b);
			}
				else
					if((b<c) && (c<a))
					{
						printf("%0.1f, %0.1f, %0.1f", a, c, b);
					}
						else
							if((c<a) && (a<b))
							{
								printf("%0.1f, %0.1f, %0.1f", b, a, c);
							}
								else
									if((c<b) && (b<a))
									{
										printf("%0.1f, %0.1f, %0.1f", a, b, c);
									}
										else
											if((a<c) && (c<b))
											{
												printf("%0.1f, %0.1f, %0.1f", b, c, a);
											}
		}
			else
				if(valorordem==3)
				{
					if((a<b) && (b<c))
	{
		printf("%0.1f, %0.1f, %0.1f", b, c, a);
	}
		else
			if((b<a) && (a<c))
			{
				printf("%0.1f, %0.1f, %0.1f", a, c, b);
			}
				else
					if((b<c) && (c<a))
					{
						printf("%0.1f, %0.1f, %0.1f", c, a, b);
					}
						else
							if((c<a) && (a<b))
							{
								printf("%0.1f, %0.1f, %0.1f", a, b, c);
							}
								else
									if((c<b) && (b<a))
									{
										printf("%0.1f, %0.1f, %0.1f", b,a, c);
									}
										else
											if((a<c) && (c<b))
											{
												printf("%0.1f, %0.1f, %0.1f", c, b, a);
											}
				}
}
