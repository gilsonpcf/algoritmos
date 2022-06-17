#include <stdio.h>

int main()
{   int num[6], i, soma, qtde, achou;
	for (i=0;i<6;i++)
	{ printf("Digite o %d.o elemento: ", i+1);
	  scanf("%d%*c", &num[i]);
	}
	soma = 0;
	achou = 0;
	printf("\nOs numeros pares sao:");
	for (i=0;i<6;i++)
	{ if (num[i]%2 == 0)
			 { achou = 1;
			   printf("\n%d na posição %d", num[i], i);
			   soma = soma + num[i];
			 }
	}
	if (achou == 0)
		 { printf("\n\tNenhum numero par foi digitado\r");
		 }
	else
		 { printf("\nSoma dos pares = %d", soma);
		 }

	qtde = 0;
	achou = 0;

	printf("\n\nOs numeros impares sao:");
	for (i=0;i<6;i++)
	{ if (num[i]%2 != 0)
			 { achou = 1;
			   printf("\n%d na posicao %d", num[i], i);
			   qtde = qtde + 1;
			 }
	}
	if (achou == 0)
		 { printf("\n\tNenhum numero impar foi digitado\r");
		 }
	else
		 { printf("\nQuantidade dos impares = %d", qtde);
		 }
	getchar();
	return 0;
}
