#include <stdio.h>
int main()
{ int mat[4][7], menor, maior, i, j, linha_menor, coluna;

  for (i=0;i<4;i++)
    { for (j=0;j<7;j++)
		{ printf("\nDigite o elemento %d - %d: ", i, j);
		  scanf("%d%*c", &mat[i][j]);
		}
	}
	menor = mat[0][0];
	linha_menor = 0;
	for (i=0;i<4;i++)
		{ for (j=0;j<7;j++)
			{ if (mat[i][j] < menor)
				 { menor = mat[i][j];
				   linha_menor = i;
				 }
			}
		}
	maior = mat[linha_menor][0];
	coluna = 0;
	for (j=0;j<7;j++)
		{ if (mat[linha_menor][j] > maior)
			 { maior = mat[linha_menor][j];
			   coluna = j;
			 }
		}
	printf("\nO elemento minmax e = %d e esta na linha %d e na coluna %d ", maior, linha_menor, coluna);
	getchar();
	return 0;
}
