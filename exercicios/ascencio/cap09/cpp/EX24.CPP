#include <string.h>
#include <stdio.h>
#include <ctype.h>
int main()
{   char verbo[200], fim[4];
	int tam, i, j;
    printf("Digite um verbo terminado em AR: ");
	gets(verbo);
	tam=strlen(verbo);
	for(i=0;i<tam;i++)
     {
        verbo[i]=toupper(verbo[i]);
     }	
	fim[0]=verbo[tam-2];
	fim[1]=verbo[tam-1];
	fim[2]='\0';
	if (strcmp(fim,"AR")!=0)
	printf("Verbo não terminado em AR");
	else
	{
	  j=0;
	  for(i=0;i<tam-2;i++)
	     {
	     fim[j]=verbo[i];
	     j++;
	     }
	     fim[j]='\0';
	     printf("\nEU %sO",fim);
	     printf("\nTU %sAS",fim);
	     printf("\nELE %sA",fim);
	     printf("\nELA %sA",fim);
	     printf("\nNóS %sAMOS",fim);
	     printf("\nVóS %sAIS",fim);
	     printf("\nELES %sAM",fim);
	     printf("\nELAS %sAM",fim);
       }
getchar();
return 0;
}
