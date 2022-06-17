#include <stdio.h>

int main()
{ char nome[5][30];
  float preco[5][4], custo[5], imp[5][4], final;
  int i,j;

  for (i=0;i<5;i++)
    { printf("\nDigite o nome do %d.o produto: ", i+1);
      scanf("%s%*c", nome[i]);
    }

  for (i=0;i<5;i++)
    { for (j=0;j<4;j++)
		{ printf("Digite o preco do produto %s na loja %d: ", nome[i], j+1);
		  scanf("%f%*c", &preco[i][j]);
		}
	}
	
  for (i=0;i<5;i++)
	{ printf("\nDigite o custo de transporte do produto %s: ", nome[i]);
	  scanf("%f%*c", &custo[i]);
	}
	
  for (i=0;i<5;i++)
	{ for (j=0;j<4;j++)
		 { if (preco[i][j] <= 50)
			 { imp[i][j] = preco[i][j] * 5 / 100;
			 }
		   else
		     { if ((preco[i] [j] > 50) && (preco[i] [j] <= 100))
				{ imp[i][j] = preco[i][j] * 10 / 100;
				}
		       else
			    { imp[i][j] = preco[i][j] * 15 / 100;
				}
		     }
	     }
    }
  for (i=0;i<5;i++)
    {
      for (j=0;j<4;j++)
		{ final = preco[i][j] + imp[i][j] + custo[i];
		  printf("\nInformacoes sobre o produto %s na loja %d: ", nome[i], j);
		  printf("\nValor do imposto: %8.2f ", imp[i][j]);
		  printf("\nCusto de transporte: %8.2f ", custo[i]);
		  printf("\nPreco: %8.2f ", preco[i][j]);
		  printf("\nPreco final: %8.2f ", final);
		  getchar();
		}
    }
  getchar();
  return 0;
}
