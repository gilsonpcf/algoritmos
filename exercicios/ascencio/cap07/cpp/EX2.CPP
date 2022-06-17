#include <stdio.h>
int main()
{  float notas[10][3], menor;
   int q1, q2, q3, prova_menor, i, j;
   for (i=0;i<10;i++)
    { for (j=0;j<3;j++)
		{ printf("\nDigite a %d.a nota do aluno %d: ", j+1, i+1);
		  scanf("%f%*c", &notas[i][j]);
		}
	}
	q1 = 0;
	q2 = 0;
	q3 = 0;
	for (i=0;i<10;i++)
		{   printf("\nAluno numero: %d ", i+1);
			menor = notas[i][0];
			prova_menor = 0;
			for (j=0;j<3;j++)
			{ if (notas[i][j] < menor)
					 { menor = notas[i][j];
						 prova_menor = j;
					 }
			}
			printf("\nA menor nota do aluno %d foi na %d.a prova ", i+1, prova_menor+1);
			if (prova_menor == 0)
				 q1 = q1 + 1;
			if (prova_menor == 1)
				 q2 = q2 + 1;
			if (prova_menor == 2)
				 q3 = q3 + 1;
	 }
	printf("\nQuantidade de alunos com menor nota na prova 1 = %d", q1);
	printf("\nQuantidade de alunos com menor nota na prova 2 = %d", q2);
	printf("\nQuantidade de alunos com menor nota na prova 3 = %d", q3);
	getchar();
	return 0;
}
