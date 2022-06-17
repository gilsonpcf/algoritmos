#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{   char gabarito[8][20], resposta[20];
	int num, pontos, tot_ap, i, j, k;
	float perc_ap;

	for (i=0;i<8;i++)
	{ printf("Digite a resposta da questao %d: ", i+1);
	  scanf("%s%*c", gabarito[i]);
	  for (k=0; k<strlen(gabarito[i]); k++)
	  { gabarito[i][k] = toupper(gabarito[i][k]);
      }
	}
	tot_ap = 0;
	for (i=1;i<=10;i++)
	{   printf("\nDigite o numero do %d.o aluno: ", i);
		scanf("%d%*c", &num);
		pontos = 0;
		for (j=0;j<8;j++)
		 { printf("\nDigite a resposta dada pelo aluno %d a %d.a questao: ", num, j+1);
		   scanf("%s%*c", resposta);
		   for (k=0; k<strlen(resposta); k++) 
		   { resposta[k] = toupper(resposta[k]);
           }
		   if (strcmp(resposta, gabarito[j]) == 0)
		      pontos++;
		 }
		 printf("\nA nota do aluno %d foi = %d", num, pontos);
		 if (pontos >= 6)
			tot_ap++;
	}
	perc_ap = tot_ap * 100 / 10;
	printf("\nPercentual de alunos aprovados = %6.2f%", perc_ap);
	getchar();
	return 0;
}
