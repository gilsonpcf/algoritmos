#include <stdio.h>
int menor_elemento(int m[][6])
{ int i, j, me;
	me = m[0][5];
	j = 4;
	for (i=1;i<6;i++)
			{ if (m[i][j] < me)
						me = m[i][j];
				j--;
			}
	return me;
}
int main()
{ int x, y, menor, matriz[6][6];
	for (x=0;x<6;x++)
		{ for (y=0;y<6;y++)
				{ 
                    printf("Digite o elemento %d - %d   ",x,y);
					scanf("%d%*c",&matriz[x][y]);
				}
		}
	menor = menor_elemento(matriz);
	printf("\n\nO menor elemento da diagonal secundária é %d ",menor);
	getchar();
	return 0;
}
