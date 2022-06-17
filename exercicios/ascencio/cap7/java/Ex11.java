import java.util.Scanner;
public class Ex11
{ public static void main(String args[])
	{ Scanner entrada = new Scanner(System.in);
	  int mat[][], i, j;
	  boolean simetria;

	  mat = new int[8][8];

	  System.out.println("\nDigitando os elementos da matriz 8 X 8 ");
	  for (i=0;i<8;i++)
	  	  { for (j=0;j<8;j++)
			  { System.out.print("\nDigite o elemento " + i + "-" + j + " ");
			    mat[i][j] = entrada.nextInt();
			  }
		  }
	  simetria = true;
	  for (i=0;i<8;i++)
		  { for (j=0;j<8;j++)
			  { if (mat[i][j] != mat[j][i])
     		  	  simetria = false;
			  }
		  }
	  if (simetria == true)
 		  System.out.println("\nMatriz Simetrica");
	  else System.out.println("\nMatriz Assimetrica");

   }   
}
