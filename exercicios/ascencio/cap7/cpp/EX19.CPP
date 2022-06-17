#include <stdio.h>

int main()
{ int mat[5][4], i, j, num, r, lin_p, col_p, lin_i, col_i, tot;
  lin_p = 0;
  col_p = 0;
  lin_i = 1;
  col_i = 0;
  tot = 0;
  do
    { printf("\nDigite um numero ");
      scanf("%d%*c", &num);
      r = num % 2;
      if (r == 0)
		{ if (lin_p > 4)
			 { printf("\nNao ha mais espaco para numeros pares \n");
			 }
		  else
			{ mat[lin_p][col_p] = num;
		      tot++;
			  col_p++;
			  if (col_p > 3)
				 { lin_p = lin_p + 2;
			       col_p = 0;
				 }
			}
		 }
	  else
		 { if (lin_i > 3)
			{ printf("\nNao ha mais espaço para numeros impares \n");
			}
	       else
			{ mat[lin_i][col_i] = num;
		      tot++;
			  col_i++;
			  if (col_i > 3)
				 { lin_i = lin_i + 2;
			       col_i = 0;
				 }
			}
		}
	} while (tot < 20);
	printf("\nMatriz totalmente preenchida\n");
	for (i=0;i<5;i++)
		{ for (j=0;j<4;j++)
				{ printf("%d ", mat[i][j]);
				}
			printf("\n");
		}
	getchar();
	return 0;
}
