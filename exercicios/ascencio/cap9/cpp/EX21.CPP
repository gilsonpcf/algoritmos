#include <string.h>
#include <stdio.h>
int main()
{ char frase[250], nova[250], letra, letra2;
  int tam, i, cont, achou, pos1;
  printf("\nDigite um nome completo ");
  gets(frase);
  tam = strlen(frase);
  strcpy(nova,"");
  achou = 0;
  i = 0;
  achou = 0;
  i = tam;
  while (achou == 0)
    { letra = frase[i];
      if (letra == ' ')
	 { pos1 = i;
	   achou = 1;
	 }
      else
	 i--;
    }
  cont=0;
  for (i=pos1+1;i<tam;i++)
   { nova[cont]=frase[i];
     cont++;
   }
  nova[cont] = ',';
  cont++;
  nova[cont] = ' ';
  cont++;
  letra2=frase[0];
  for (i=0;i<=pos1;i++)
    { letra = frase[i];
      if ((letra == ' ') || (letra == '\0'))
	 { nova[cont] = letra2;
	   cont++;
	   nova[cont]='.';
	   cont++;
	   nova[cont]= ' ';
	   cont++;
	   letra2=frase[i+1];
	 }
    }
  nova[cont]='\0';
  printf(nova);
  getchar();
  return 0;
}
