#include <stdio.h>
void ordena(int v[])
{ int i, j, aux;
  for (i=0;i<5;i++)
    { for (j=0;j<4;j++)
				{ if (v[j] > v[j+1])
						 { aux = v[j];
							 v[j] = v[j+1];
							 v[j+1] = aux;
						 }
				}
		}
}
int main()
{ int x, vet[5];
	for (x=0;x<5;x++)
		{ printf("Digite o %dº elemento de A ",(x+1));
		  scanf("%d%*c",&vet[x]);
		}
	ordena(vet);
	printf("\n\nVetor ordenado \n\n");
	for (x=0;x<5;x++)
		printf("%d  ",vet[x]);
	getchar();
	return 0;
}
