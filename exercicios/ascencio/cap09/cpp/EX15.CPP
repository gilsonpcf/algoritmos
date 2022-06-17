#include <string.h>
#include <stdio.h>
#include <ctype.h>
int main()
{
		char NOME[80];
		char LOGIN[20];
		int ACHOU, I, J, K, TAM, POSI, QTDE;
		printf("\nDigite o nome: ");
		gets(NOME);
		TAM=strlen(NOME);
		for(I=0;I<strlen(NOME);I++)
          NOME[I] = tolower(NOME[I]);
		LOGIN[0]=NOME[0];
		QTDE=0;
		for(I=0;I<TAM;I++)
		{
		 if (NOME[I] == ' ')
		 {
					QTDE=QTDE+1;
					POSI=I;
		 }
		}
		if (QTDE == 1)
			{
				J=1;
				for (K=POSI+1;K<TAM;K++)
				{
					LOGIN[J]=NOME[K];
					J++;
				}
		 }
		else
			{
				ACHOU=0;
				I=0;
				J=1;
				while (ACHOU == 0)
				 {
					if (NOME[I] == ' ')
						{
							 ACHOU=1;
							 POSI=I;
						}
				 I=I+1;
				 }
			LOGIN[J]=NOME[POSI+1];
			J++;
			ACHOU=0;
			I=TAM;
			while (ACHOU == 0)
			{
					if (NOME[I] == ' ')
					{
							 ACHOU=1;
							 POSI=I;
					}
				 I=I-1;
		 }
		 for(I=POSI+1;I<TAM;I++)
		 {
			 LOGIN[J]=NOME[I];
			 J++;
		 }
	 }
LOGIN[J]='\0';
printf("\nNome = %s",NOME);
printf("\nLogin = %s",LOGIN);
getchar();
return 0;
}
