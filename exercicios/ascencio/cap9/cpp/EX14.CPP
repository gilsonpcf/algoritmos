#include <string.h>
#include <stdio.h>
#include <ctype.h>
int main()
{
	char frase[255], nova[255];
	int tam,i;
	printf("\nDigite uma frase\n");
	gets(frase);
	tam=strlen(frase);
	nova[0]=toupper(frase[0]);
	i=1;
	while (i<tam)
	{
		if (frase[i] != ' ')
		{
		 nova[i] = frase[i];
		 i++;
		}
		else
		{
		 nova[i] = frase[i];
		 nova[i+1] = toupper(frase[i+1]);
		 i=i+2;
		}
	}
nova[i]='\0';
printf("\nNova frase = %s",nova);
getchar();
return 0;
}
