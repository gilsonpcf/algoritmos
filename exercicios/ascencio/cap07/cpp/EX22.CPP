#include <stdio.h>

int main()
{   float prod[5][3], tot_arm, maior_e, menor_e, custo_p, custo_a;
	int i, j, ind_a;
	for (i=0;i<4;i++)
		{ for (j=0;j<3;j++)
			 { printf("\nDigite o estoque do produto %d no armazem %d: ", j+1, i+1);
			   scanf("%f%*c", &prod[i][j]);
			 }
		}
	for (i=0;i<3;i++)
		{  printf("\nDigite o custo do produto %d: ", i+1);
		   scanf("%f%*c", &prod[4][i]);
		}
	for (i=0;i<4;i++)
		{   tot_arm = 0;
			for (j=0;j<3;j++)
				{  tot_arm = tot_arm + prod[i][j];
				}
			printf("\nO total de itens no armazem %d é %8.2f", i+1, tot_arm);
			if (i==0)
				 { menor_e = tot_arm;
				   ind_a = i;
				 }
			else
				{ if (tot_arm < menor_e)
					 { menor_e = tot_arm;
					   ind_a = i;
					 }
				}
		}
	printf("\nArmazem com menor estoque %d ", ind_a+1);
	for (i=0;i<4;i++)
		{ if (i==0)
				 { maior_e = prod[i][1];
					 ind_a = i;
				 }
			else
				 { if (prod[i][1] > maior_e)
					{ maior_e = prod[i][1];
					  ind_a = i;
					}
				 }
		}
	printf("\nO maior estoque do produto 2 esta no armazem %d ", ind_a+1);
	for (i=0;i<3;i++)
		{ custo_p = 0;
			for (j=0;j<4;j++)
				{  custo_p = custo_p + prod[j][i] * prod[4][i];
				}
			printf("\nO custo total do produto %d: 8.2%f", i+1, custo_p);
		}
		
	for (i=0;i<4;i++)
		{ custo_a = 0;
			for (j=0;j<3;j++)
				{ custo_a = custo_a + prod[i][j] * prod[4][j];
				}
			printf("\nO custo total do armazem %d é %8.2f", i+1, custo_a);
		}
	getchar();
	return 0;
}

