import java.util.Scanner;
public class Ex5
{ public static void main(String args[])
	{ Scanner entrada = new Scanner(System.in);
	  int mat[][], menor, maior, i, j, linha_menor, coluna;
	
	  mat = new int[4][7];
      
      for (i=0;i<4;i++)
       { for (j=0;j<7;j++)
	      { System.out.print("\nDigite o elemento " + i + "-" + j + " ");
	        mat[i][j] = entrada.nextInt();
	      }
       } 
  	  menor = mat[0][0];
  	  linha_menor = 0;
  	  for (i=0;i<4;i++)
       { for (j=0;j<7;j++)
	      { if (mat[i][j] < menor)
	         { menor = mat[i][j];
	           linha_menor = i;
	         }
	      }
       }
      maior = mat[linha_menor][0];
      coluna = 0;
      for (j=0;j<7;j++)
       { if (mat[linha_menor][j] > maior)
	      { maior = mat[linha_menor][j];
	        coluna = j;
	      }
       }
      System.out.println("\nO elemento minmax = " + maior + " e esta na linha " + linha_menor + " e na coluna " + coluna);
  }   	    
}