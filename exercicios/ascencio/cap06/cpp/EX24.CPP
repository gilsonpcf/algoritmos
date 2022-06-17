#include <stdio.h>

int main()
{   int a[10], repetidos[10], vezes[10], i, j, qtde, cont, cont_r;

	for (i=0; i<10; i++)
	{ printf("Digite o %d.o numero do vetor: ", i+1);
	  scanf("%d%*c", &a[i]);
	}

	cont_r = 0;
	for (i=0; i<10; i++)
	{ qtde = 1;
		for (j=0; j<i; j++)
		{ if (i != j)
			 { if (a[i] == a[j])
				  qtde = qtde + 1;
			 }
		 }
		if (qtde > 1)
			 { cont = 0;
				 while (cont < cont_r && a[i] != repetidos[cont])
				 {
					 cont = cont + 1;
				 }
				 if (cont == cont_r)
						{ repetidos[cont_r] = a[i];
						  vezes[cont_r] = qtde;
						  cont_r = cont_r + 1;
						}
				 else
						vezes[cont] = vezes[cont]+1;
			 }
	}
	for (i=0; i<cont_r; i++)
	{ printf("\nO numero %d apareceu %d vezes ", repetidos[i], vezes[i]);
	}
	getchar();
	return 0;
}
