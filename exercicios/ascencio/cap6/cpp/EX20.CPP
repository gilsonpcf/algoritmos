#include <stdio.h>

int main()
{   float vet[5];
    int i, cod;

	for (i=0;i<5;i++)
	{ printf("Digite o %d.o numero: ", i+1);
	  scanf("%f%*c", &vet[i]);
	}

	printf("\nDigite o valor do codigo (0, 1 ou 2) ");
	scanf("%d%*c", &cod);

	if (cod == 0)
		printf("\nFim");

	if (cod == 1)
	{ printf("\nValores na ordem de digitacao");
	  for (i=0;i<5;i++)
			{ printf("\n%8.2f", vet[i]);
			}
	}

	if (cod == 2)
	{ printf("\nValores na ordem inversa a da digitacao");
		for (i=4;i>=0;i--)
			{ printf("\n%8.2f", vet[i]);
			}
	}

	if (cod < 0 || cod > 2)
		 printf("\nCodigo invalido");

	getchar();
	return 0;
}
