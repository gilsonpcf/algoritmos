#include <string.h>
#include <stdio.h>
int main()
{
char frase[100], nova[200];
int tam,i,j,k,posi,fim;
printf("\nDigite uma frase\n");
gets(frase);
tam=strlen(frase);
posi=0;
j=0;
for(i=0;i<=tam;i++)
{
		 if (frase[i] == ' ' || frase[i] == '\0')
		 {
					if (frase[i] == '\0')
					fim=i-1;
					else
					fim=i;
					for(k=posi;k<=fim;k++)
					{
						nova[j]=frase[k];
						j=j+1;
					}
					if (frase[i] == '\0')
					{
					nova[j]=' ';
					j++;
					}
					for(k=posi;k<=fim;k++)
					{
						nova[j]=frase[k];
						j=j+1;
					}
					posi=i+1;
					}
}
nova[j]='\0';
printf("\nNova frase = %s",nova);
getchar();
return 0;
}
