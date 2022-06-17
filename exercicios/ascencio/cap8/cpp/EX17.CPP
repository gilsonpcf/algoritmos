#include <stdio.h>
int soma_matriz(int m[][5])
{ int i, j, soma;
	soma=0;
	for (i=0;i<5;i++)
		for (j=0;j<5;j++)
			soma = soma + m[i][j];
	return soma;
}
int main()
{ int x, y, s, matriz[5][5];
	for (x=0;x<5;x++)
		{ for (y=0;y<5;y++)
			{ 
                printf("Digite o elemento %d - %d  ",x,y);
				scanf("%d%*c",&matriz[x][y]);
			}
		}
	s=soma_matriz(matriz);
	printf("\n\nA soma dos elementos da matriz é %d",s);
	getchar();
	return 0;
}
