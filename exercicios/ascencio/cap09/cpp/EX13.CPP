#include <string.h>
#include <stdio.h>
int main()
{
	char frase[255], nova[255], palavra[50],palavra_invertida[50];
	int tam,i,j,tamp,k,l;
	printf("\nDigite uma frase\n");
	gets(frase);
	tam=strlen(frase);
	i=0;
	j=0;
	strcpy(nova,"\0");
	strcpy(palavra,"\0");
	while (i<=tam)
	{
		if (i < tam && frase[i] != ' ')
		{
		palavra[j]=frase[i];
		j++;
		}
		else
		{
		if (i == tam)
		{
		palavra[j]='\0';
		tamp=strlen(palavra);
		l=0;
		for (k=tamp-1;k>=0;k--)
		    {
		     palavra_invertida[l]=palavra[k];
		     l++;
            }		
		}
		else
		{
		palavra[j]='\0';
		tamp=strlen(palavra);
		l=0;
		for (k=tamp-1;k>=0;k--)
		    {
		     palavra_invertida[l]=palavra[k];
		     l++;
            }	
        palavra_invertida[l]='\0';    	
		strcat(palavra_invertida," ");
		}
		strcat(nova,palavra_invertida);
		strcpy(palavra,"\0");
		j=0;
		}
	 i++;
}
printf("\nNova frase = %s",nova);
getchar();
return 0;
}
