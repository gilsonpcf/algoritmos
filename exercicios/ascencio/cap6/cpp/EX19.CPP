#include <stdio.h>

int main()
{   char vet1[20], vet2[20], aux;
	int i, j;

	for (i=0;i<20;i++)
	{ printf("Digite o %d.o caractere do vetor 1: ", i+1);
	  scanf("%c%*c", &vet1[i]);
	}

	for (i=0;i<20;i++)
	{ printf("Digite o %d.o caractere do vetor 2: ", i+1);
	  scanf("%c%*c", &vet2[i]);
	}

	printf("\nConteudo do vetor 1");
	for (i=0;i<20;i++)
	{ printf("\n%c", vet1[i]);
	}

	printf("\nConteudo do vetor 2");
	for (i=0;i<20;i++)
	{ printf("\n%c", vet2[i]);
	}

	j = 19;
	for (i=0;i<20;i++)
	{
		aux = vet1[i];
		vet1[i] = vet2[j];
		vet2[j] = aux;
		j--;
	}

	printf("\nConteudo do vetor 1 alterado");
	for (i=0;i<20;i++)
	{ printf("\n%c", vet1[i]);
	}
    getchar();
	printf("\nConteudo do vetor 2 alterado");
	for (i=0;i<20;i++)
	{ printf("\n%c", vet2[i]);
	}
	getchar();
	return 0;
}
