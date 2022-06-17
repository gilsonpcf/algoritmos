#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{ char frase[200], letra;
  int tam, i;
  printf("\nDigite uma frase\n");
  gets(frase);
  tam = strlen(frase);
  for (i=0;i<tam;i++)
    {
      letra = frase[i];
      letra=toupper(letra);
      if ((letra == 'A') || (letra == 'E')
	   || (letra == 'I') || (letra == 'O') || (letra == 'U'))
	 { frase[i] = '*';
	 }
    }
  printf("%s",frase);
  getchar();
  return 0;
}
