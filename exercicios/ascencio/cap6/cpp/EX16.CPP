#include <stdio.h>
int main()
{   int vet1[10], vet2[5], vet_result1[10], vet_result2[10];
	int i, j, poslivre1, poslivre2, soma;

	for (i=0;i<10;i++)
	{
		printf("Digite o %d.o elemento do vetor 1: ", i+1);
		scanf("%d%*c", &vet1[i]);
	}
	for (i=0;i<5;i++)
	{
		printf("Digite o %d.o elemento do vetor 2: ", i+1);
		scanf("%d%*c", &vet2[i]);
	}
	poslivre1 = 0;
	poslivre2 = 0;

	for (i=0;i<10;i++)
	{ soma = vet1[i];
		for (j=0;j<5;j++)
		{
			soma = soma + vet2[j];
		}
		if (soma%2 == 0)
			 {
				 vet_result1[poslivre1] = soma;
				 poslivre1++;
			 }
		 else
			 {
				 vet_result2[poslivre2] = soma;
				 poslivre2++;
			 }
	}
	printf("\nPrimeiro vetor resultante");
	for (i=0;i<poslivre1;i++)
	{
		printf("\n%d", vet_result1[i]);
	}

	printf("\nSegundo vetor resultante");
	for (i=0;i<poslivre2;i++)
	{
		printf("\n%d", vet_result2[i]);
	}
	getchar();
	return 0;
}
