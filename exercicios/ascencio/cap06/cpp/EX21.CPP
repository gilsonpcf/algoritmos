#include <stdio.h>

int main()
{   int vet[15], p[5], i[5], cont, k, poslivre_p, poslivre_i;

	for (cont=0;cont<15;cont++)
	{ printf("Digite o %d.o numero: ", cont+1);
	  scanf("%d%*c", &vet[cont]);
	}

	poslivre_p = 0;
	poslivre_i = 0;

	for (cont=0;cont<15;cont++)
	{
		if (vet[cont]%2 == 0)
			 {
				 p[poslivre_p] = vet[cont];
				 poslivre_p = poslivre_p + 1;
			 }
		else
			 {
				 i[poslivre_i] = vet[cont];
				 poslivre_i = poslivre_i + 1;
			 }

		if (poslivre_p == 5)
			 { printf("\nVetor de pares cheio");
				 for (k=0;k<poslivre_p;k++)
				 { printf("\n%d", p[k]);
				 }
				 poslivre_p = 0;
			 }
		if (poslivre_i == 5)
			 { printf("\nVetor de impares cheio");
				 for (k=0;k<poslivre_i;k++)
				 { printf("\n%d", i[k]);
				 }
				 poslivre_i = 0;
			 }
	}

	if (poslivre_i != 0)
		 { printf("\nVetor de impares restante");
			 for (k=0;k<poslivre_i;k++)
			 { printf("\n%d", i[k]);
			 }
		 }
		 
	if (poslivre_p != 0)
		 { printf("\nVetor de pares restante");
			 for (k=0;k<poslivre_p;k++)
			 { printf("\n%d", p[k]);
			 }
		 }
	
    getchar();
	return 0;
}
