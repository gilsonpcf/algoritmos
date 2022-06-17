#include <string.h>
#include <stdio.h>
int main()
{
char frase[200];
int tam,i,qtde;
qtde=0;
printf("\nDigite uma frase\n");
gets(frase);
tam=strlen(frase);
for (i=0;i<tam;i++)
{
 if (frase[i] == ' ')
    {
    qtde = qtde + 1;
    }
}
printf("\nQuantidade de palavras = %d",qtde+1);
getchar();
return 0;
}
