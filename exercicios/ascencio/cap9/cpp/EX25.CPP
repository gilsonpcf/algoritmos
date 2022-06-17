#include <string.h>
#include <stdio.h>
#include <ctype.h>
int main()
{ char frase[200];
  int tam, i, qtde;
  printf("Digite uma frase\n");
  gets(frase);
  tam=strlen(frase);
  for(i=0;i<tam;i++)
    {
      frase[i]=toupper(frase[i]);
    }  
  qtde=0;
  for(i=1;i<tam;i++)
    {
    if (frase[i] == ' ' && frase[i-1] == 'R')
    qtde = qtde + 1;
    }
  if (frase[tam-1] == 'R')
  qtde=qtde+1;
printf("\nQuantidade de verbos = %d",qtde);
getchar();
return 0;
}
