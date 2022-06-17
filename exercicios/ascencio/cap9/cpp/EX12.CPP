#include <string.h>
#include <stdio.h>
int main()
{   char frase[150], frase_nova[150];
    int i, tam, pos;
	printf("\nDigite uma frase ");
	gets(frase);
	tam = strlen(frase);
	pos=0;
    for (i=tam-1;i>=0;i--)
     { 
       frase_nova[pos]=frase[i];
       pos = pos + 1;
     }   
    frase_nova[pos]='\0';
	printf("\nNova frase = %s",frase_nova);
	getchar();
	return 0;
}
