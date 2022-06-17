#include <stdio.h>

int main()
{   int vet1[10], vet2[10], vet3[20], i, j;
	j = 0;
	for (i=0;i<10;i++)
	{   printf("\nDigite o %d.o numero do vetor 1: ", i+1);
		scanf("%d%*c", &vet1[i]);
		vet3[j] = vet1[i];
		j++;
		printf("Digite o %d.o numero do vetor 2: ", i+1);
		scanf("%d%*c", &vet2[i]);
		vet3[j] = vet2[i];
		j++;
	}
	printf("\n\nVetor intercalado");
	for (i=0;i<20;i++)
		printf("\n%d", vet3[i]);
	getchar();
    return 0;
}
