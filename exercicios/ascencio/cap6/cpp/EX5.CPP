#include <stdio.h>

int main()
{   int X[10], Y[10], U[20], D[10], S[10], P[10], IT[10];
	int i, j, k, cont_u, cont_d, cont_i;

	for (i=0;i<10;i++)
		{   printf("Digite o %d.o elemento do vetor X: ", i+1);
			scanf("%d%*c", &X[i]);
			printf("Digite o %d.o elemento do vetor Y: ", i+1);
			scanf("%d%*c", &Y[i]);
		}
	cont_u = 0;
	cont_d = 0;
	cont_i = 0;
	for (i=0;i<10;i++)
		{   j = 0;
			while (j < cont_u && X[i] != U[j])
			{ j++;
			}
			if (j >= cont_u)
				 { U[cont_u] = X[i];
					 cont_u++;
				 }
		 }
	for (i=0;i<10;i++)
		{ j = 0;
			while (j < cont_u && Y[i] != U[j])
			{ j++;
			}
			if (j >= cont_u)
				 { U[cont_u] = Y[i];
					 cont_u++;
				 }
		}
	printf("\nVetor Uniao ");
	for (i=0;i<cont_u;i++)
		{ printf("\n%d", U[i]);
		}

	for (i=0;i<10;i++)
		{ j = 0;
			while (j < 10 && X[i] != Y[j])
			{ j++;
			}
			if (j >= 10)
				 {   k = 0;
					 while (k <= cont_d && X[i] != D[k])
					 { k++;
					 }
					 if (k >= cont_d)
							{ D[cont_d] = X[i];
							  cont_d++;
							}
					}
	}
	printf("\nVetor Diferenca ");
	for (i=0;i<cont_d;i++)
		{ printf("\n%d", D[i]);
		}

	for (i=0;i<10;i++)
		{ S[i] = X[i] + Y[i];
		  P[i] = X[i] * Y[i];
		}

	printf("\nVetor Soma ");
	for (i=0;i<10;i++)
		{ printf("\n%d", S[i]);
		}

	printf("\nVetor Produto ");
	for (i=0;i<10;i++)
		{ printf("\n%d", P[i]);
		}

	for (i=0;i<10;i++)
		{   j = 0;
			while (j < 10 && X[i] != Y[j])
			 { j++;
			 }
			if (j < 10)
				 { k = 0;
					 while (k < cont_i && IT[k] != X[i])
					 { k++;
					 }
					 if (k >= cont_i)
							{ IT[cont_i] = X[i];
							  cont_i++;
							}
					}
		}
	printf("\nVetor Intersecao ");
	for (i=0;i<cont_i;i++)
		{ printf("\n%d", IT[i]);
		}
	getchar();
	return 0;
}
