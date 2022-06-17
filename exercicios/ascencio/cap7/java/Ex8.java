import java.util.Scanner;
public class Ex8
{ public static void main(String args[])
	{ Scanner entrada = new Scanner(System.in);
	  int mat1[][], mat2[][], i, j, qtde;

	  mat1 = new int[6][4];
	  mat2 = new int[6][4];
  
	  System.out.println("\nDigitando os elementos da matriz 6 X 4 ");
	  for (i=0;i<6;i++)
	    { for (j=0;j<4;j++)
			{ System.out.print("\nElemento da linha " + i + " com a coluna " + j + " ");
			  mat1[i][j] = entrada.nextInt();
			}
		}
	  qtde = 0;
	  for (i=0;i<6;i++)
	    { for (j=0;j<4;j++)
			{ if (mat1[i][j] > 30)
	       	   qtde++;
			}
		}
	  for (i=0;i<6;i++)
	    { for (j=0;j<4;j++)
			{ if (mat1[i][j] == 30)
     			mat2[i][j] = 0;
  			  else
     			mat2[i][j] = mat1[i][j];
			}
		}
	  System.out.println("\nQuantidade de numeros maiores que 30 = " + qtde);
	  System.out.println("\nImprimindo a matriz resultante ");
	  for (i=0;i<6;i++)
	    { for (j=0;j<4;j++)
			{ System.out.println(mat2[i][j] + " ");
			}
	      System.out.print("\n");
	    }
   } 
}
