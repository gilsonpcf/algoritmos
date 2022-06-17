#include <string.h>
#include <stdio.h>
int main()
{ char frase[200], letras[26];
  int rep[26], tam1, tam2, i, j, cont;
  for (i=0;i<26;i++)
      rep[i] = 0;
  printf("\nDigite uma frase ");
  gets(frase);
  tam1 = strlen(frase);
  letras[0]='\0';
	for (i=0;i<=tam1;i++)
    { if (frase[i] != ' ')
	 { j=0;
	   while ((letras[j] != frase[i]) && (letras[j] != '\0'))
	      j++;
	   if (letras[j] == frase[i])
	      rep[j] = rep[j]+1;
	   else
	     { rep[j] = 1;
	       letras[j] = frase[i];
	       letras[j+1] = '\0';
	     }
	 }
    }
  tam2 = strlen(letras);
  cont = 0;
  for (i=0;i<tam2;i++)
      { if (rep[i] > 1)
	  {
	   printf("\nA letra %c apareceu %d vezes",letras[i],rep[i]);
	   cont = 1;
	  }
      }
  if (cont == 0)
    printf("\nNenhuma letra se repete");
  getchar();
  return 0;
}
