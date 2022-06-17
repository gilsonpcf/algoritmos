#include <stdio.h>

int main()
{   int mat[4][4], soma_linha[4], soma_coluna[4], soma_diagp, soma_diags, i, j, compara, q_magico;

	printf("\nDigitando os elementos da matriz 4 X 4 \n");
	for (i=0;i<4;i++)
		{ for (j=0;j<4;j++)
				{ printf("\nDigite elemento %d-%d ", i, j);
				  scanf("%d%*c", &mat[i][j]);
			}
		}

	for (i=0;i<4;i++)
		{ soma_linha[i] = 0;
			for (j=0;j<4;j++)
				{ soma_linha[i] = soma_linha[i] + mat[i][j];
				}
		}

	for (i=0;i<4;i++)
		{ soma_coluna[i] = 0;
			for (j=0;j<4;j++)
				{ soma_coluna[i] = soma_coluna[i] + mat[j][i];
				}
		}

	soma_diagp = 0;
	for (i=0;i<4;i++)
		{ soma_diagp = soma_diagp + mat[i][i];
		}

	soma_diags = 0;
	j = 3;
	for (i=0;i<4;i++)
		{ soma_diags = soma_diags + mat[i][j];
		  j = j - 1;
		}

	q_magico = 1;
	for (i=0;i<4;i++)
		{ for (j=0;j<4;j++)
				{ if (soma_linha[i] != soma_coluna[j])
					 q_magico = 0;
				}
		}

	for (i=0;i<4;i++)
		{ if (soma_linha[i] != soma_diagp)
			 q_magico = 0;
		}

	for (i=0;i<4;i++)
		{ if (soma_linha[i] != soma_diags)
			 q_magico = 0;
		}

	if (q_magico == 1)
		 printf("\nForma quadrado magico");
	else
		 printf("\nNao forma quadrado magico");
	getchar();
	return 0;
}
