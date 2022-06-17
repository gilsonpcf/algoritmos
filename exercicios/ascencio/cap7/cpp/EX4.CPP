#include <stdio.h>
int main()
{ float mat[10][20], soma[10];
  int i, j;
  for (i=0;i<10;i++)
    { for (j=0;j<20;j++)
		{ printf("\nDigite o elemento da linha %d com a coluna %d da matriz: ", i, j);
		  scanf("%f%*c", &mat[i][j]);
		}
	}
	for (i=0;i<10;i++)
		{ soma[i] = 0;
			for (j=0;j<20;j++)
				soma[i] = soma[i] + mat[i][j];
		}
	for (i=0;i<10;i++)
		{ for (j=0;j<20;j++)
				mat[i][j] = mat[i][j] * soma[i];
		}
	printf("\nImprimindo a matriz resultante");
	for (i=0;i<10;i++)
		{ printf("\nLinha %d \n", i);
			for (j=0;j<20;j++)
				printf("%6.2f  ", mat[i][j]);
		}
	getchar();
	return 0;
}
