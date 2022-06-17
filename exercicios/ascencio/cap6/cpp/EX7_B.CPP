#include <stdio.h>

int main()
{   int vet[8], i, j, z, aux;
	for (i=0;i<8;i++)
		{   printf("\nDigite o %d.o elemento do vetor: ", i+1);
			scanf("%d%*c", &aux);
			j = 0;
			while ((j<i) && vet[j] < aux)
			 {
				 j++;
			 }
			for (z=i;z>j;z--)
			 {
				 vet[z] = vet[z-1];
			 }
			vet[j] = aux;
		}
	printf("\nVetor Ordenado ");
	for (i=0;i<8;i++)
		{
			printf("\n%d", vet[i]);
		}
	getchar();
	return 0;
}
