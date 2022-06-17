#include <string.h>
#include <stdio.h>
int main()
{ char frase1[250], frase2[250], nova_frase[250], letra;
  int tam1, tam2, i, j, cont;
  printf("\nDigite a primeira frase ");
  gets(frase1);
  printf("\nDigite a segunda frase ");
  gets(frase2);
  tam1 = strlen(frase1);
  tam2 = strlen(frase2);
  i = 0;
  j = 0;
  cont = 0;
  while ((i<=tam1) || (j<=tam2))
    { if (i<=tam1)
	 { letra = frase1[i];
	   while ((letra != ' ') && (letra != '\0'))
	     { nova_frase[cont] = letra;
	       cont++;
	       i++;
	       letra = frase1[i];
	     }
	   nova_frase[cont] = ' ';
	   cont++;
	   i++;
	 }
      if (j<=tam2)
	 { letra = frase2[j];
	   while ((letra != ' ') && (letra != '\0'))
	     { nova_frase[cont] = letra;
	       cont++;
	       j++;
	       letra = frase2[j];
	     }
	   nova_frase[cont] = ' ';
	   cont++;
	   j++;
	 }
    }
  nova_frase[cont]='\0';
  printf(nova_frase);
  getchar();
  return 0;
}
