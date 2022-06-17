#include <stdio.h>

int main()
{   int vet[10], i, j, aux;
	for (i=0;i<10;i++)
		{ printf("\nDigite o %d.o elemento do vetor: ", i+1);
		  scanf("%d%*c", &vet[i]);
		}
	for (i=0;i<10;i++)
		{ for (j=0;j<9;j++)
			 { if (vet[j] < vet[j+1])
				{ aux = vet[j];
			      vet[j] = vet[j+1];
				  vet[j+1] = aux;
				}
			 }
		}
	printf("\nVetor ordenado de forma decrescente");
	for (i=0;i<10;i++)
		{ printf("\n%d", vet[i]);
		}
	getchar();
	return 0;
}
