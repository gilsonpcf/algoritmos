#include <string.h>
#include <stdio.h>
int main()
{   char frase[250];
	char palavra_frase[5];
	int tam, i, j, k, cont, res;
	printf("\nDigite uma frase ");
	gets(frase);
	tam = strlen(frase);
	i=0;
	cont=0;
	for (i=0;i<tam-3;i++)
		{
			k=0;
			for (j=i;j<i+4;j++)
				 {
						palavra_frase[k] = frase[j];
						k++;
				 }
		 palavra_frase[k] = '\0';
		 res=strcmp(palavra_frase,"AULA");
		 if (res==0)
			 {
				 if (frase[i+4]=='\0'|| frase[i+4] == ' ')
				 cont++;
			}
		}
	printf("\nQuantidade de palavra AULA na frase = %d",cont);
	getchar();
	return 0;
}
