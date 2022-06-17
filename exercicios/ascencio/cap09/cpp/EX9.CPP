#include <string.h>
#include <stdio.h>
int main()
{   char frase[100];
	char palavra[50];
	char nova[250];
	char pal[50];
	int tam, tam2, i, j, k, cont, res;
	printf("\nDigite uma frase ");
	gets(frase);
	printf("\nDigite a palavra ");
	gets(palavra);
	strcat(palavra,"\0");
	strcat(pal,"\0");
	strcpy(pal,palavra);
	tam = strlen(frase);
	tam2 = strlen(palavra);
	i=0;
	cont=0;
	for (i=0;i<=tam-tam2;i++)
		{
			k=0;
			nova[0]='\0';
			for (j=i;j<i+tam2;j++)
				 {
						nova[k] = frase[j];
						k++;
				 }
		 nova[k]='\0';
		 res=strcmp(palavra,nova);
		 if (res==0)
			 {
				 if (frase[j]=='\0' || frase[j] == ' ')
				 cont++;
			}
		}
	printf("\nQuantidade de palavra %s na frase = %d",pal,cont);
	getchar();
	return 0;
}
