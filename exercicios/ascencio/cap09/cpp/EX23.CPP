#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
// a função toascii não é do padrão ANSI
int main()
{   char frase[200], crip[200];
	char l;
	int tam, i, num, k;
    printf("Digite um nome: ");
	gets(frase);
    tam=strlen(frase);
	for (i=0;i<tam;i++)
	{
        frase[i]=toupper(frase[i]);
    }
	k=0;
	for (i=0;i<tam;i++)
	{
		 l=frase[i];
		 if (l != ' ')
		 {
				 if (l == 'X' || l == 'Y' || l == 'Z')
					{
					if (l == 'X') l='A';
					if (l == 'Y') l='B';
					if (l == 'Z') l='C';
					num=int(l);
					}
				 else
				 {
					num=int(l);
					num=num+3;
				 }
				 l=toascii(num);
				 crip[k]=l;
				 k=k+1;
		 }
			if (l == ' ')
			{
			 crip[k]=' ';
			 k=k+1;
			}
}
crip[k]='\0';
printf("\nFrase cripitografada\n %s",crip);
getchar();
return 0;
}
