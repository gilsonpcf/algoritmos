#include <stdio.h>

int main()
{ int mat[15][5], rep[15][5], vezes[15][5], i, j, k, l, lin, lin2, col, x, num, qtde, achou;

  for (i=0;i<15;i++)
    { for (j=0;j<5;j++)
		{ printf("\nDigite o elemento %d-%d ", i, j);
		  scanf("%d%*c", &mat[i][j]);
		}
	}
  lin = 0;
  col = 0;
  for (i=0;i<15;i++)
  { for (j=0;j<5;j++)
	{ qtde = 1;
	  num = mat[i][j];
	  for (k=0;k<15;k++)
	  { for (l=0;l<5;l++)
		  { if ((i!=k) || (j!=l))
			   if (mat[k][l] == num)
			      qtde++;
		  } //fim for l
	  } // fim k
     if (qtde > 1)
	    { achou = 0;
	      if (col == 0)
		     lin2 = lin-1;
	      else
		     lin2 = lin;
	      for (k=0;k<=lin2;k++)
	          { if (k<lin2)
		            x=4;
	            else
		            x=col-1;
                for (l=0;l<=x;l++)
		            { if (num==rep[k][l])
			             achou = 1;
		             }
              }
          if (achou == 0)
	         { rep[lin][col] = num;
	           vezes[lin][col] = qtde;
	           col++;
               if (col > 4)
	              { lin++;
	                col=0;
	              }
             }
         }
      } //fim for j
   } //fim for i
  for (i=0;i<=lin;i++)
   { if (i<lin)
		 x=4;
 	 else
		 x=col-1;
	 for (j=0;j<=x;j++)
		{ printf("\nO numero %d esta repetido %d vezes", rep[i][j], vezes[i][j]);
		}
	printf("\n");
   }
  getchar();
  return 0;
}

