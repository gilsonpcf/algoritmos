import java.util.Scanner;
public class EX19
{ public static void main(String args[])
    { Scanner entrada = new Scanner(System.in);
      int x, y, matriz[][];
      matriz = new int[6][6];
	  
	  for (x=0;x<6;x++)
	    { for (y=0;y<6;y++)
			{ System.out.print("Digite o elemento " + x + "-" + y + " ");
			  matriz[x][y] = entrada.nextInt();
			}
	    }
	  multiplica_matriz(matriz);
	  System.out.println("\n\nMatriz alterada\n\n");
	  
	  for (x=0;x<6;x++)
	    { for (y=0;y<6;y++)
			{ System.out.print(matriz[x][y] + "  ");
			}
		  System.out.println();	
	    }
	}

	public static void multiplica_matriz(int m[][])
	{ int i, j, me, v;
	  for (i=0;i<6;i++)
	    { v=m[i][i];
	      for (j=0;j<6;j++)
			m[i][j] = m[i][j] * v;
	    }
	}
  }	