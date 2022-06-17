import java.util.Scanner;
public class Ex19
{ public static void main(String args[])
	{ Scanner entrada = new Scanner(System.in);
	  int mat[][], i, j, num, r, lin_p, col_p, lin_i, col_i, tot;

	  mat = new int[5][4];
	
  	  lin_p = 0;
	  col_p = 0;
	  lin_i = 1;
	  col_i = 0;
	  tot = 0;
	
	  do
		{ System.out.print("\nDigite um numero ");
	      num = entrada.nextInt();
	      r = num % 2;
	      if (r == 0)
			 { if (lin_p > 4)
			      { System.out.println("\nNao ha mais espaço para numeros pares ");
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
			      { System.out.println("\nNao ha mais espaço para numeros ¡mpares ");
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
	  System.out.println("\nMatriz totalmente preenchida");
	  for (i=0;i<5;i++)
	    { for (j=0;j<4;j++)
			{ System.out.print(mat[i][j] + " ");
			}
	      System.out.println("");
	    }
   }   
}
