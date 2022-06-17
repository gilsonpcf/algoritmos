#include <stdio.h>
int pares(int v1[], int v2[])
{ int i, r, cont;
	cont = 0;
	for (i=0;i<8;i++)
			{ r = v1[i] % 2;
				if (r == 0)
					 { v2[cont] = v1[i];
						 cont = cont + 1;
					 }
			}
	return cont;
}

int impares(int v1[], int v2[])
{ int i, r, cont;
	cont = 0;
	for (i=0;i<8;i++)
			{ r = v1[i] % 2;
				if (r == 1)
					 { v2[cont] = v1[i];
						 cont = cont + 1;
					 }
			}
	return cont;
}
int main()
{ int vet1[8], vet2[8], vet3[8], i, cont1, cont2;
	for (i=0;i<8;i++)
			{ printf("Digite um número no vetor ");
				scanf("%d%*c",&vet1[i]);
			}

	cont1 = pares(vet1, vet2);
	if (cont1 == 0)
			printf("\nNENHUM PAR FOI DIGITADO");
	else
		 { printf("\nVetor de pares\n");
			 for (i=0;i<cont1;i++)
					 printf("%d   ",vet2[i]);
		 }

	cont2 = impares(vet1, vet3);
	if (cont2 == 0)
		 printf("NENHUM ÍMPAR FOI DIGITADO");
	else
		 { printf("\nVetor de ímpares\n");
			 for (i=0;i<cont2;i++)
					 printf("%d    ",vet3[i]);
		 }
	getchar();
	return 0;
}
