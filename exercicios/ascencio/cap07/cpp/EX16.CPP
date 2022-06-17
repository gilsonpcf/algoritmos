#include <stdio.h>

int main()
{ float mat[7][7], vet1[7], vet2[7], maior, menor;
  int i, j;

  for (i=0;i<7;i++)
    { for (j=0;j<7;j++)
		{ printf("\nDigite o valor do elemento %d-%d: ", i, j);
          scanf("%f%*c", &mat[i][j]);
		}
    }
  for (i=0;i<7;i++)
	{ maior = mat[i][0];
      for (j=1;j<7;j++)
		{ if (mat[i][j] > maior)
			 maior = mat[i][j];
		}
	  vet1[i] = maior;
	 }
  for (i=0;i<7;i++)
	{ menor = mat[0][i];
      for (j=1;j<7;j++)
		{ if (mat[j][i] < menor)
			 menor = mat[j][i];
		}
	  vet2[i] = menor;
	}
  printf("\nValores armazenados na matriz \n");
  for (i=0;i<7;i++)
	{ for (j=0;j<7;j++)
		{ printf("\nElemento %d-%d: %d", i, j, mat[i][j]);
		}
	}
  printf("\n\nVetor com os maiores valores de cada linha \n");
  for (i=0;i<7;i++)
  printf("%6.2f ", vet1[i]);
  printf("\n\nVetor com os menores valores de cada coluna \n");
  for (i=0;i<7;i++)
 	 printf("%6.2f ", vet2[i]);
  getchar();
  return 0;
}
