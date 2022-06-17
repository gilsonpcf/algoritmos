import java.util.Scanner;
public class Ex18
{ public static void main(String args[])
	{ Scanner entrada = new Scanner(System.in);
	  int vet[], mat[][], i, j, lin, col;
	
	  vet = new int[18];
	  mat = new int[3][6];
  		
	  for (i=0;i<18;i++)
	    { System.out.print("\nDigite elemento " + i + " ");
	      vet[i] = entrada.nextInt();
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
			{ System.out.print("\nElemento " + i + "-" + j + " " + mat[i][j]);
			}
		}
   } 
}