#include <stdio.h>
int main()
{   int a[4][5], b[5][2], c[4][2], i, j, k, soma, mult;
	printf("\nDigitando os elementos da matriz A \n");
	for (i=0;i<4;i++)
		{ for (j=0;j<5;j++)
				{ printf("\nDigite o elemento %d-%d: ", i, j);
				  scanf("%d%*c", &a[i][j]);
				}
		}
	printf("\nDigitando os elementos da matriz B \n");
	for (i=0;i<5;i++)
		{ for (j=0;j<2;j++)
			 { printf("\nDigite o elemento %d-%d: ", i, j);
			   scanf("%d%*c", &b[i][j]);
			 }
		}
	soma = 0;
	//Calculando a matriz resultante
	for (i=0;i<4;i++)
		{ for (k=0;k<2;k++)
				{ for (j=0;j<5;j++)
						{ mult = a[i][j] * b[j][k];
							soma = soma + mult;
						}
				 c[i][k] = soma;
				 soma = 0;
			 }
		}
	printf("\nEscrevando a matriz resultante da multiplicacao \n");
	for (i=0;i<4;i++)
		{ for (j=0;j<2;j++)
				{ printf("%d ", c[i][j]);
				}
			printf("\n");
		}
	getchar();
	return 0;
}
