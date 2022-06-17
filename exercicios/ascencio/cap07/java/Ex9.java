import java.util.Scanner;
public class Ex9
{ public static void main(String args[])
	{ Scanner entrada = new Scanner(System.in);
	  int mat[][], rep[][], vezes[][], i, j, k, l, lin, lin2, col, x, num, qtde, achou;

	  mat = new int[15][5];
	  rep = new int[15][5];
	  vezes = new int[15][5];

		  
  	  for (i=0;i<15;i++)
	    { for (j=0;j<5;j++)
			{ System.out.print("\nDigite o elemento " + i + "-" + j + " ");
			  mat[i][j] = entrada.nextInt();
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
			       //for (k=0;k<=lin;k++)
					 { if (k<lin)
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
			{ System.out.println("\nO numero " + rep[i][j] + " esta repetido " + vezes[i][j] + " vezes");
			}
	      System.out.print("\n");
	    }
   }   
}

