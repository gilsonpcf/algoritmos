#include <stdio.h>
int main()
{   int mat[5][7], i, j, k, achou, maior, menor, num, linha1, linha2, coluna1, coluna2, cont;
	printf("\nDigitando os numeros da matriz 5 X 7 \n");
	for (i=0;i<5;i++)
		{ for (j=0;j<7;j++)
				{ printf("Digite o elemento da linha %d e da coluna %d: ", i, j);
				  scanf("%d%*c", &mat[i][j]);
				}
		}
	cont = 0;
	for (i=0;i<5;i++)
		{ menor = mat[i][0];
		  linha1 = i;
		  coluna1 = 0;
		  for (j=0;j<7;j++)
		  	{ if (mat[i][j] < menor)
				 { menor = mat[i][j];
				   linha1 = i;
				   coluna1 = j;
				 }
			}
		  maior = mat[0][coluna1];
		  linha2 = 0;
		  for (j=0;j<5;j++)
		 	{ if (mat[j][coluna1] > maior)
		 		 { maior = mat[j][coluna1];
				   linha2 = j;
				 }
			}
		  if (linha1 == linha2)
			 { printf("\nPonto de sela = %d na posicao %d-%d",maior, linha1, coluna1);
			   cont++;
			 }
		}
	if (cont == 0)
		 printf("\nNao existe ponto de sela nesta matriz ");
  getchar();
  return 0;
}
