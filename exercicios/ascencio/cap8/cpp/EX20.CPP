#include <stdio.h>
float media_aritmetica(int m[][12])
{ int i, j, cont;
  float soma, media;
  soma=0;
  cont=0;
  for (i=1;i<12;i++)
    for (j=11;j>(11-i);j--)
      { 
        soma = soma+ m[i][j];
		cont++;
	  }
	media = soma/cont;
	return media;
}
int main()
{ int x, y, matriz[12][12];
	float m;
	for (x=0;x<12;x++)
		{ for (y=0;y<12;y++)
					{ 
                        printf("Digite o elemento %d - %d  ",x,y);
						scanf("%d%*c",&matriz[x][y]);
					}
		}
	m = media_aritmetica(matriz);
	printf("\n\nA média aritmética é  %5.2f ",m);
	getchar();
	return 0;
}
