#include <stdio.h>

int main()
{   int X[5], Y[5], R[10], i, j, z, aux;
	for (i=0;i<5;i++)
	{ printf("\nDigite o %d.o elemento do vetor X: ", i+1);
	  scanf("%d%*c", &X[i]);
	}
	for (i=0;i<5;i++)
	{ for (j=0;j<4;j++)
		 { if (X[j] > X[j+1])
				 { aux = X[j];
				   X[j] = X[j+1];
				   X[j+1] = aux;
				 }
		 }
	}
	for (i=0;i<5;i++)
	{ printf("\nDigite o %d.o elemento do vetor Y: ", i+1);
	  scanf("%d%*c", &Y[i]);
	}
	for (i=0;i<5;i++)
	{ for (j=0;j<4;j++)
			{ if (Y[j] > Y[j+1])
				 { aux = Y[j];
				   Y[j] = Y[j+1];
				   Y[j+1] = aux;
				 }
			}
	}
	j = 0;
	for (i=0;i<5;i++)
		{ R[j] = X[i];
		  j++;
		  R[j] = Y[i];
		  j++;
		}

	for (i=0;i<10;i++)
	{ for (j=0;j<9;j++)
		{ if (R[j] > R[j+1])
			 { aux = R[j];
			   R[j] = R[j+1];
			   R[j+1] = aux;
			 }
		}
	}
	printf("\nVetor X ordenado ");
	for (i=0;i<5;i++)
	{ printf("\n%d", X[i]);
	}

	printf("\nVetor Y ordenado ");
	for (i=0;i<5;i++)
	{ printf("\n%d", Y[i]);
	}

	printf("\nVetor Resultante ");
	for (i=0;i<10;i++)
	{ printf("\n%d", R[i]);
	}
	getchar();
	return 0;
}
