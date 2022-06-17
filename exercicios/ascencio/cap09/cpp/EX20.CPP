#include <string.h>
#include <stdio.h>
int main()
{ char frase[250], nova[250], letra, letra2;
  int tam, i, cont, achou, pos1, pos2, pos3;
  printf("\nDigite um nome completo ");
  gets(frase);
  tam = strlen(frase);
  strcpy(nova,"");
  achou = 0;
  i = 0;
  while (achou == 0)
    { letra = frase[i];
      if (letra != ' ')
	 nova[i] = letra;
      else
	 { nova[i]=letra;
	   achou = 1;
	   pos1=i;
	 }
      i++;
    }

  achou = 0;
  i = tam;
  while (achou == 0)
    { letra = frase[i];
      if (letra == ' ')
	 { pos2 = i;
	   achou = 1;
	 }
      else
	 i--;
    }
  cont=pos1+1;
  letra2=frase[cont];
  for (i=pos1+1;i<=pos2;i++)
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
  for (i=pos2+1;i<=tam;i++)
      { nova[cont] = frase[i];
	cont++;
      }
  strcat(nova,"\0");
  printf(nova);
  getchar();
  return 0;
}
