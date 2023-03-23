//strcmp
#include<stdio.h>

int comparar(char s1 [], char s2 [])
{
	int i;
	char nome1[10] nome2[10];
	for (i=0; (s1[i] !='\0') && (s2[i] != '\0') && (s1[i] == s2[i]); i++);// for (i =0; (s1[i]) && (s2[i]) && (s1[i] == s2[i]; i++);
//for vazio

//isso 
	if((s1[i] =='\0') && (s2[i] =='\0'))// =s1[i] == s2[i]
	{
		return 0;
	}
	else 
	{
		if (s1[i] > s2[i])
		{
			return 1;
		}
		else 
		{
			return -1;
		}
		
	}
	//é a mesma coisa que = return (s1[i] - s2[i]);
	
}
