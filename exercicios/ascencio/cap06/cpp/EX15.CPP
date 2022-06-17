#include <stdio.h>

int main()
{   int vet1[10], vet2[5], i, j, achou;

	for (i=0;i<10;i++)
	{ printf("Digite o %d.o numero do vetor 1: ", i+1);
	  scanf("%d%*c", &vet1[i]);
	}

	for (i=0;i<5;i++)
	{ printf("Digite o %d.o numero do vetor 2: ", i+1);
	  scanf("%d%*c", &vet2[i]);
	}

	for (i=0;i<10;i++)
	{   achou = 0;
		printf("\nNumero %d", vet1[i]);
		for (j=0;j<5;j++)
		{ if (vet1[i] % vet2[j] == 0)
			 { printf("\n\tDivisivel por %d na posicao %d \r", vet2[j], j);
			   achou = 1;
			 }
		}
	}
	if (achou == 0)
	   printf("\nNao possui divisores no 2.o vetor");
	   
	getchar();
	return 0;
}
