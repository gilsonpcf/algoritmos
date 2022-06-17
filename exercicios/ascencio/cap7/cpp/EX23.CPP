#include <stdio.h>

int main()
{   float vendas[4][5], tot_ven, tot_sem, tot_geral;
    int i, j;
    for (i=0;i<4;i++)
      { for (j=0;j<5;j++)
	      { printf("\nDigite o valor da venda do vendedor %d na semana %d: ", j+1, i+1);
		    scanf("%f%*c", &vendas[i][j]);
		  }
	  }
	for (i=0;i<5;i++)
		{ tot_ven = 0;
			for (j=0;j<4;j++)
				{  tot_ven = tot_ven + vendas[j][i];
				}
			printf("\nO total de vendas do vendedor %d foi de %8.2f", i+1, tot_ven);
		}
	for (i=0;i<4;i++)
		{ tot_sem = 0;
			for (j=0;j<5;j++)
				{  tot_sem = tot_sem + vendas[i][j];
				}
			printf("\nO total de vendas da semana %d foi de %8.2f", i+1, tot_sem);
		}
	tot_geral = 0;
	for (i=0;i<4;i++)
		{ for (j=0;j<5;j++)
			{  tot_geral = tot_geral + vendas[i][j];
			}
		}
	printf("\nO total geral de vendas e %8.2f", tot_geral);
	getchar();
	return 0;
}

