#include <stdio.h>

int main()
{   int mat[10][10], aux, i, j;
	printf("\nDigitando os numeros da matriz 10 X 10 ");
	for (i=0;i<10;i++)
		{ for (j=0;j<10;j++)
			 { printf("\nDigite o elemento %d-%d ", i, j);
		       scanf("%d%*c", &mat[i][j]);
			 }
		}
//trocando a linha 2 com a linha 8
	for (j=0;j<10;j++)
		{ aux = mat[1][j];
		  mat[1][j] = mat[7][j];
		  mat[7][j] = aux;
		}

//trocando a coluna 4 com a coluna 10

	for (i=0;i<10;i++)
		{ aux = mat[i][3];
		  mat[i][3] = mat[i][9];
		  mat[i][9] = aux;
		}

//trocando a diagonal principal com a diagonal secundária

	j = 9;
	for (i=0;i<10;i++)
		{ aux = mat[i][i];
		  mat[i][i] = mat[i][j];
		  mat[i][j] = aux;
		  j--;
		}
//trocando a linha 5 com a coluna 10
	for (j=0;j<10;j++)
		{ aux = mat[4][j];
		  mat[4][j] = mat[j][9];
		  mat[j][9] = aux;
		}
	printf("\nMatriz apos as alteracoes \n");
	for (i=0;i<10;i++)
		{ for (j=0;j<10;j++)
				{ printf(" %d", mat[i][j]);
				}
			printf("\n");
		}
	getchar();
	return 0;
}
