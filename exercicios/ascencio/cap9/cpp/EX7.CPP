#include <string.h>
#include <stdio.h>
int main()
{ char frase[250], frase_nova[250], palavra1[50], palavra2[50];
  int achou, comeco, tam1, tam2, tam3, i, j, y, z, cont, cont2;
  printf("\nDigite uma frase ");
  gets(frase);
  tam1 = strlen(frase);
  i=0;
  cont=0;
  comeco=0;
  frase_nova[0]='\0';
  for (i=0;i<=tam1;i++)	   //vai percorrer cada caractere da frase
    { if ((frase[i] != ' ') && (frase[i] != '\0'))
       { palavra1[cont]=frase[i];  //coloca cada caractere da frase na variável letra
	 cont++;
       }
      else
       { palavra1[cont]='\0';
	 tam2=strlen(frase_nova);
	 j=0;
	 cont2=0;
	 achou=0;
	 tam3=strlen(palavra1);
	 if (tam2==0) //nenhuma palavra foi inserida na nova frase (onde as palavras estarao ordenadas)
	    { for (y=0;y<=tam3;y++)
		{ frase_nova[y]=palavra1[y];
		}
	      frase_nova[cont]='\0'; //acrescenta caracter de fim de cadeia
	    }
	 else
	    { while ((j<=tam2) && (achou==0))
		{ if ((frase_nova[j] != ' ') && (frase_nova[j] != '\0'))
		     { palavra2[cont2]=frase_nova[j];
		       cont2++;
		       j++;
		     }
		  else
		   { palavra2[cont2]='\0';
		     comeco=j-strlen(palavra2);
		     if (strcmp(palavra1,palavra2) < 0)
			{ for (y=tam2;y>=comeco;y--)
			    { frase_nova[y+tam3+1]=frase_nova[y];
			    }
			  frase_nova[comeco+tam3]= ' ';
			  z=0;
			  for (y=comeco;y<comeco+tam3;y++)
			    { frase_nova[y]=palavra1[z];
			      z++;
			    }
			  achou=1;
			}
		      else //encontrou a ultima palavra da frase
			{ if (frase_nova[j]== '\0')
			     { z=0;
			       for (y=tam2+1;y<=tam2+tam3+1;y++)
				 { frase_nova[y]=palavra1[z];
				   z++;
				 }
			       frase_nova[y]='\0';
			       frase_nova[tam2]=' ';
			     }
			}
		      j++;
		      cont2=0;
		   }
		} //fim while
	    } //fim else
	 palavra1[0]='\0';
	 cont=0;
	} //fim else
   } //fim for
  strcat(frase_nova,"\0");
  printf(frase_nova);
  getchar();
  return 0;
}
