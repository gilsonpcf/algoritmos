#include <stdio.h>

int main()
{ int vet1[5], vet2[10], mat[4][3], mat_result[4][3], i, j, maior=0, menor=0, mult, soma, qtde;
  
  printf("Lendo o 1o vetor \n");
  for (i=0;i<5;i++)
    { printf("Digite o %d.o elemento: ", i+1);
      scanf("%d%*c", &vet1[i]);
	}
  printf("\nLendo o 2o vetor \n");
  for (i=0;i<10;i++)
	{ printf("Digite o %d.o elemento: ", i+1);
	  scanf("%d%*c", &vet2[i]);
	}

  maior = vet1[0];
  for (i=0;i<5;i++)
	{ if (vet1[i] > maior)
		 maior = vet1[i];
	}

  menor = vet2[0];
  for (i=0;i<10;i++)
	{ if (vet2[i] < menor)
		 menor = vet2[i];
	}

  mult = maior * menor;
  printf("\n\nMaior elemento do vetor 1: %d", maior);
  printf("\nMenor elemento do vetor 2: %d", menor);
  printf("\nMultiplicaçao do maior pelo menor: %d", mult);
  printf("\n\nLendo os elementos da matriz \n");
  for (i=0;i<4;i++)
	{ for (j=0;j<3;j++)
		{ printf("Digite o elemento %d-%d: ", i+1, j+1);
          scanf("%d%*c", &mat[i][j]);
		}
	}
  printf("\n\nMostrando nova matriz ");
  for (i=0;i<4;i++)
	{ for (j=0;j<3;j++)
     	{ mat_result[i][j] = mat[i][j] + mult;
		  printf("\nElemento %d-%d: ", i+1, j+1, mat_result[i][j]);
		}
	}

  for (i=0;i<4;i++)
	{ soma = 0;
      for (j=0;j<3;j++)
	    { if (mat_result[i][j]%2 == 0)
			 soma = soma + mat_result[i][j];
		}
      printf("\nSoma dos elementos pares da linha %d da matriz resultante = %d", i, soma);
    }

  for (j=0;j<3;j++)
	{ qtde = 0;
	  for (i=0;i<4;i++)
		{ if (mat_result[i][j] > 1 && mat_result[i][j] < 5)
			 qtde = qtde + 1;
		}
	  printf("\nTotal de numeros entre 1 e 5 na coluna %d da matriz resultante = %d", j, qtde);
	}
  getchar();
  return 0;
}
