#include <stdio.h>

int main()
{ int mes1[5][3], mes2[5][3], bim[5][3], i, j, tot_prod, tot_loja, maior;

  for (i=0;i<5;i++)
    { for (j=0;j<3;j++)
		{ printf("\nDigite a venda do produto %d na loja %d referente ao mes 1: ", i+1, j+1);
		  scanf("%d%*c", &mes1[i][j]);
		}
    }
  for (i=0;i<5;i++)
	{ for (j=0;j<3;j++)
		{ printf("\nDigite a venda do produto %d na loja %d referente ao mes 2: ", i+1, j+1);
		  scanf("%d%*c", &mes2[i][j]);
		}
	}
  for (i=0;i<5;i++)
	{ for (j=0;j<3;j++)
		{ bim[i][j] = mes1[i][j] + mes2[i][j];
		  printf("\nVenda bimestral do produto %d na loja %d foi %d", i+1, j+1, bim[i][j]);
		  if ((i==0) && (j==0))
			  maior = bim[i][j];
		  else
			 { if ((bim[i][j] > maior))
				  maior = bim[i][j];
			 }
		}
	}
  printf("\nA maior venda do bimestre foi %d", maior);
  for (i=0;i<3;i++)
 	{ tot_loja = 0;
      for (j=0;j<5;j++)
		{ tot_loja = tot_loja + bim[j][i];
		}
	  printf("\nO total vendido no bimestre pela loja %d foi %d", i+1, tot_loja);
	}
  
  for (i=0;i<5;i++)
	{ tot_prod = 0;
	  for (j=0;j<3;j++)
		{ tot_prod = tot_prod + bim[i][j];
		}
	  printf("\nO total vendido do produto %d foi de %d", i+1, tot_prod);
	}
	
  getchar();
  return 0;
}
