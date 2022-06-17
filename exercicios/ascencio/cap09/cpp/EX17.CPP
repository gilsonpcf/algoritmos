#include <string.h>
#include <stdio.h>
int main()
{ char frase[255],frase_nova[255], palavra_digitada[40], palavra_frase[40];
  int tam, i, cont, res;
    printf("\nDigite uma frase ");
	gets(frase);
	printf("\nDigite a palavra para substituição ");
	gets(palavra_digitada);
	tam = strlen(frase);
	i=0;
	cont=0;
	strcpy(palavra_frase,"\0");
	strcpy(frase_nova,"\0");
	for (i=0;i<=tam;i++)
		{ 
          if ((frase[i] != ' ') && (frase[i] != '\0'))
  	         { 
               palavra_frase[cont] = frase[i];
               cont++;
             }
		  else
	         { 
               palavra_frase[cont] = '\0';
               cont=0;
               res=strcmp(palavra_frase,"ESCOLA");
		       if (res==0)
				  { 
                    strcat(frase_nova,palavra_digitada);
               		strcat(frase_nova," ");
                 	strcpy(palavra_frase,"\0");
				  }
		       else
				  { 
                    strcat(frase_nova,palavra_frase);
               		strcat(frase_nova," ");
                 	strcpy(palavra_frase,"\0");
				  }
	          }
		}
	strcat(frase_nova,"\0");
	printf(frase_nova);
	getchar();
	return 0;
}
