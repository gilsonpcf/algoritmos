#include <string.h>
#include <stdio.h>
int main()
{   char frase[100], frase_nova[250];
	char palavra[50];
	int tam, i, j,cont;
	printf("\nDigite uma frase ");
	gets(frase);
	tam = strlen(frase);
	i=0;
	cont=0;
	frase_nova[0]='\0';
	while (i<tam)
		{
		j = i;
   
		while (j < tam && frase[j] != ' ')
			{
				palavra[cont] = frase[j];
				cont++;
				j++;
			}
				palavra[cont] = '\0';
				cont=0;
				if (strcmp(palavra,"ALUNO")==0)
				{
					strcat(frase_nova,"ESTUDANTE");
				}
			 else if (strcmp(palavra,"ESCOLA")==0)
				{
					strcat(frase_nova,"UNIVERSIDADE");
				}
			 else
			 {
					strcat(frase_nova,palavra);
			 }
			 if (j < tam)
			 strcat(frase_nova," ");
			 i = j + 1;
	 }
	strcat(frase_nova,"\0");
	printf("\nNova frase = %s",frase_nova);
	getchar();
	return 0;
}
