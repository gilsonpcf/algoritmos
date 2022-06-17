import java.util.Scanner;
public class Ex1
{
  public static void main(String args[])
   { Scanner entrada = new Scanner(System.in);
     int mat[][], resultado[][], i, j, maior;
     mat = new int[2][2];
     resultado = new int [2][2];
  				
     for (i=0;i<2;i++)
         { for (j=0;j<2;j++)
	           { System.out.println("\nDigite o elemento da linha " + (i+1) + " e coluna " + (j+1) + " ");
	             mat[i][j] = entrada.nextInt();
	           }
         }
     maior = mat[0][0];
     for (i=0;i<2;i++)
         { for (j=0;j<2;j++)
	           { if (mat[i][j] > maior)
	                maior = mat[i][j];
	           }
         }
     for (i=0;i<2;i++)
         { for (j=0;j<2;j++)
	           resultado[i][j] = maior * mat[i][j];
         }
     System.out.println("\nImprimindo a matriz resultante ");
     for (i=0;i<2;i++)
         { for (j=0;j<2;j++)
	           { System.out.println(resultado[i][j] + " ");
	           }
         }
   
  }
}  
  