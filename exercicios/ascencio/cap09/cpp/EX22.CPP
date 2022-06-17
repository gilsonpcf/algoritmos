#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
// a função toascii não é do padrão ANSI
int main()
{ char frase[100], nova[100], meio[100], senha[200], texto[4];
	int tam,i,j,num,k;
	printf("Digite um nome: ");
	gets(frase);
	tam=strlen(frase);
	for(i=0;i<tam;i++)
	 frase[i]=toupper(frase[i]);
	nova[0]=frase[0];
	j=1;
	for(i=1;i<tam;i++)
	{
		 if (frase[i] == ' ')
		 {
				 nova[j]=frase[i+1];
				 j=j+1;
		 }
	}
strcpy(meio,nova);
for(i=0;i<strlen(meio);i++)
	 meio[i]=tolower(meio[i]);
k=j;
for(i=0;i<k;i++)
{
		 nova[j]=meio[i];
		 j=j+1;
}
strcpy(senha,"\0");
for(i=0;i<j;i++)
{
 num=toascii(nova[i]);
 itoa(num,texto,10);
 if (i == 0)
 strcpy(senha,texto);
 else
 strcat(senha,texto);
}
nova[j]='\0';
strcat(senha,"\0");
printf("\nLogin = %s",nova);
printf("\nSenha = %s",senha);
getchar();
return 0;
}
