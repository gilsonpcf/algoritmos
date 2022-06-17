#include <stdio.h>
int main()
{   int mat1[6][4], mat2[6][4], i, j, qtde;
    printf("\nDigitando os elementos da matriz 6 X 4 \n");
    for (i=0;i<6;i++)
      { for (j=0;j<4;j++)
		 { printf("Elemento da linha %d com a coluna %d: ", i, j);
	       scanf("%d%*c", &mat1[i][j]);
		 }
	}
	qtde = 0;
	for (i=0;i<6;i++)
		{ for (j=0;j<4;j++)
			{ if (mat1[i][j] > 30)
		         qtde++;
			}
		}
	for (i=0;i<6;i++)
		{ for (j=0;j<4;j++)
				{ if (mat1[i][j] == 30)
						 mat2[i][j] = 0;
					else
						 mat2[i][j] = mat1[i][j];
				}
		}
	printf("\nQuantidade de numeros maiores que 30 = %d", qtde);
	printf("\n\nImprimindo a matriz resultante \n");
	for (i=0;i<6;i++)
		{ for (j=0;j<4;j++)
				{ printf("%d ", mat2[i][j]);
				}
			printf("\n");
		}
	getchar();
	return 0;
}
