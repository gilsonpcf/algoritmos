#include <stdio.h>
int main()
{ int vet[18], mat[3][6], i, j, lin, col;
 
  for (i=0;i<18;i++)
    { printf("\nDigite elemento %d ", i);
      scanf("%d%*c", &vet[i]);
    }
  lin = 0;
  col = 0;
  for (i=0;i<18;i++)
    { mat[lin][col] = vet[i];
      col++;
      if (col > 5)
         { col = 0;
		   lin++;
		 }
     }
  for (i=0;i<3;i++)
	{ for (j=0;j<6;j++)
		{ printf("\nElemento %d-%d: %d", i, j, mat[i][j]);
		}
	}
  getchar();
  return 0;
}
