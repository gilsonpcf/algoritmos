#include <stdio.h>
void multiplica_matriz(int m[][6])
{ int i, j, me, v;
  for (i=0;i<6;i++)
    { v=m[i][i];
      for (j=0;j<6;j++)
					m[i][j] = m[i][j] * v;
		}
}
int main()
{ int x, y, matriz[6][6];
	for (x=0;x<6;x++)
		{ for (y=0;y<6;y++)
					{ 
                        printf("Digite o elemento %d - %d  ",x,y);
						scanf("%d%*c",&matriz[x][y]);
					}
		}
	multiplica_matriz(matriz);
	printf("\n\nMatriz alterada\n\n");
	for (x=0;x<6;x++)
		{ for (y=0;y<6;y++)
					{ 
						printf("%d    ",matriz[x][y]);
					}
			printf("\n");
		}
	getchar();
	return 0;
}
