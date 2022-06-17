#include <stdio.h>

int main()
{   int mat[8][8], i, j, simetria;
	printf("\nDigitando os elementos da matriz 8 X 8 ");
	for (i=0;i<8;i++)
		{ for (j=0;j<8;j++)
				{ printf("\nDigite o elemento %d-%d ", i, j);
				  scanf("%d%*c", &mat[i][j]);
				}
		}
	simetria = 1;
	for (i=0;i<8;i++)
		{ for (j=0;j<8;j++)
				{ if (mat[i][j] != mat[j][i])
					 simetria = 0;
				}
		}
	if (simetria == 1)
		 printf("\nMatriz Simetrica");
	else printf("\nMatriz Assimetrica");
	getchar();
	return 0;
}
