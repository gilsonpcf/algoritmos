#include <stdio.h>
#include <string.h>
int main()
{ char lojas[8][20], produtos[4][30];
  float pre[4][8];
  int i, j;
  for (j=0;j<8;j++)
    { printf("\nDigite o nome da %d.a loja: ", j+1);
      scanf("%s%*c", lojas[j]);
    }
  for (i=0;i<4;i++)
    { printf("\nDigite o nome do %d.o produto: ", i+1);
      scanf("%s%*c", produtos[i]);
    }
  for (i=0;i<4;i++)
    { for (j=0;j<8;j++)
		{ printf("\nDigite o preco do produto %s na loja %s ", produtos[i], lojas[j]);
		  scanf("%f%*c", &pre[i][j]);
		}
    }
	printf("\nListagem dos produtos e respectivas lojas cujos precos nao ultrapassam R$ 120,00");
	for (i=0;i<4;i++)
		{ for (j=0;j<8;j++)
			{ if (pre[i][j] < 120)
				 printf("\n%s - %s ", produtos[i], lojas[j]);
			}
		}
	getchar();
	return 0;
}

