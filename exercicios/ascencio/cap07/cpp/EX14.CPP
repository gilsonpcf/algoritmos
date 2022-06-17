#include <stdio.h>

int main()
{ char cidade[5][30];
  float distancia[5][5], consumo, qtde;
  int i, j;

  for (i=0;i<5;i++)
    { printf("\nDigite o nome da cidade %d: ", i+1);
      scanf("%s%*c", cidade[i]);
    }

  for (i=0;i<5;i++)
    { for (j=0;j<5;j++)
				{ if (i == j)
						 { distancia[i][j] = 0;
						 }
					else
						 { printf("\nDigite a distancia entre %s e %s: ", cidade[i], cidade[j]);
						 scanf("%f%*c", &distancia[i][j]);
						 }
				}
		}
	for (i=0;i<5;i++)
		{ for (j=0;j<5;j++)
			 { if ((distancia[i][j] <= 250) && (distancia[i][j] > 0))
						{ printf("\nDistancia: %f7.2 entre %s e %s",  distancia[i][j], cidade[i], cidade[j]);
						}
			 }
		}
	printf("\nDigite o consumo de um veiculo (Km por litro)");
	scanf("%f%*c", &consumo);
	for (i=0;i<5;i++)
		{ for (j=0;j<5;j++)
				{ if (i != j)
						 { qtde = distancia[i][j] / consumo;
							 printf("\nConsumo entre %s e %s = %8.2f", cidade[i], cidade[j], qtde);
						 }
				}
		}
	getchar();
	return 0;
}
