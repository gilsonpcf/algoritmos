#include <stdio.h>
void perfeitos(int v[]);
int main()
{ int vet[3], i;
	perfeitos(vet);
	for (i=0;i<3;i++)
		printf("\nO %dº número perfeito é %d",i,vet[i]);
	getchar();
	return 0;
}
void perfeitos(int v[])
{ int a, r, num, soma, cont;
	cont = 0;
	num = 1;
	while (cont < 3)
		{ soma = 0;
			for (a=1;a<num;a++)
				{ r = num%a;
					if (r==0)
						 soma = soma + a;
				}
		 if (soma == num)
				{ v[cont] = num;
					cont++;
				}
		 num++;
		}
}
