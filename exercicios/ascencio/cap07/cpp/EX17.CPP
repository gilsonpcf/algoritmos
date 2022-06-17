#include <stdio.h>

int main()
{ int mat[5][5], i, j, dp, lin_ac, col_ac, lin_ab, col_ab, num, r, cont_dp, cont_ac, cont_ab;
  dp = 0;
  lin_ac = 0;
  col_ac = 1;
  lin_ab = 1;
  col_ab = 0;
  cont_dp = 0;
  cont_ac = 0;
  cont_ab = 0;
  while ((cont_ac < 10) || (cont_ab < 10) || (cont_dp < 5))
  { printf("\nDigite um numero: ");
	scanf("%d%*c", &num);
	r = num%5;
	if (r == 0)
	 { if (cont_dp < 5)
		{ mat[dp][dp] = num;
		  dp++;
		  cont_dp++;
		}
	   else
		{ printf("\nNao existe mais espaco para multiplos de 5 ");
		  getchar();
		}
      }
	else
	{ r = num%11;
	  if (r == 0)
	    { if (cont_ac < 10)
			{ mat[lin_ac][col_ac] = num;
		      col_ac++;
              if (col_ac > 4)
			     { lin_ac++;
				   col_ac = lin_ac + 1;
				 }
			  cont_ac++;
			}
	      else
			{ printf("\nNao existe mais espaco para multiplos de 11 ");
		      getchar();
			}
		}
	  else
	    { r = num%13;
		  if (r == 0)
			{ if (cont_ab < 10)
				 { mat[lin_ab][col_ab] = num;
		           col_ab++;
				   if (col_ab >= lin_ab)
					{ lin_ab++;
				      col_ab=0;
					}
                   cont_ab++;
				 }
			   else
				 { printf("\nNao existe mais espaco para multiplos de 13 ");
			       getchar();
				 }
			}
		  else
			{ printf("\nVocê deve digitar um numero multiplo de 5 ou de 11 ou de 13 ");
			}
		}
	}
  } //fim while

  for (i=0;i<5;i++)
	{ for (j=0;j<5;j++)
		{ printf("%d ", mat[i][j]);
		}
	  printf("\n");
	}
  getchar();
  return 0;
}
