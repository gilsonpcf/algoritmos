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
 if (frase[i]=='a' || frase[i] =='A'
    || frase[i]=='e' || frase[i] =='E'
    || frase[i]=='i' || frase[i] =='I'
    || frase[i]=='o' || frase[i] =='O'
    || frase[i]=='u' || frase[i] =='U')
    {
      qtde = qtde + 1;
    }
}
printf("\nQuantidade de vogais = %d",qtde);
getchar();
return 0;
}
