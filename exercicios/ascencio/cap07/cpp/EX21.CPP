#include <stdio.h>

int main()
{ int num[100][100], dim, l, c, soma, cont;
  do
	{ printf("\nDigite a dimensao da matriz (quadrada) - no maximo 100 ");
	  scanf("%d%*c", &dim);
	} while ((dim < 1) || (dim > 100));
  for (l=0;l<dim;l++)
	{ for (c=0;c<dim;c++)
		{ printf("\nDigite o numero da posicao %d-%d ", l+1, c+1);
		  scanf("%d%*c", &num[l][c]);
		}
	}
  soma = 0;
  cont = 0;
  for (l=0;l<dim;l++)
	{ for (c=dim-1;c>dim-1-cont;c--)
		{ printf("%d ", num[l][c]);
		  soma = soma + num[l][c];
		}
      cont++;
	}
  printf("\nSoma = %d", soma);
  getchar();
  return 0;
}
