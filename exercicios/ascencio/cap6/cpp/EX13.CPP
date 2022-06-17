#include <stdio.h>

int main()
{   int vet[10], i, achou;

	for (i=0; i<10;i++)
	 { printf("Digite o %d.o numero: ", i+1);
	   scanf("%d%*c", &vet[i]);
	 }
	 achou = 0;

	 for (i=0; i<10;i++)
	 { if (vet[i] > 50)
		{ printf("\nNumero maior que 50: %d encontrado na posicao %d", vet[i], i);
		  achou = 1;
		}
	 }
	 if (achou == 0)
		printf("\nNao existem numeros superiores a 50 no vetor");
	 
     getchar();
	 return 0;
}
