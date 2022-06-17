#include <stdio.h>
void gera_vetor(int m[][4], int v[]);
int main()
{ int mat[3][4], vet[12], i, j;
	for (i=0; i<3; i++)
		{  for (j=0;j<4;j++)
			{ printf("Digite o número da posição %d-%d  ",i,j);
			  scanf("%d%*c",&mat[i][j]);
			}
		}
gera_vetor(mat, vet);
printf("\nVetor gerado\n");
for (i=0; i<12; i++)
	{ 
          printf("\nPosição %d: %d",i,vet[i]);
	}
getchar();
return 0;
}

void gera_vetor(int m[][4], int v[])
{ int i, j, k;
  k = 0;
  for (i=0; i<3; i++)
  {  for (j=0;j<4;j++)
	  {  v[k] = m[i][j];
         k = k + 1;
	  }
  }
}
   	
