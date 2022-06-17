import java.util.Scanner;
public class EX18
{ public static void main(String args[])
   { Scanner entrada = new Scanner(System.in);
     int x, y, menor, matriz[][];
     matriz = new int[6][6];
     for (x=0;x<6;x++)
	    { for (y=0;y<6;y++)
			{ System.out.print("Digite o elemento " + x + "-" + y + " ");
			  matriz[x][y] = entrada.nextInt();
			}
	    }
	  menor = menor_elemento(matriz);
	  System.out.println("\n\nO menor elemento da diagonal secundaria e " + menor);
	}

	public static int menor_elemento(int m[][])
	{ int i, j, me;
	  me = m[0][5];
	  j = 4;
	  for (i=1;i<6;i++)
		  { if (m[i][j] < me)
			   me = m[i][j];
			j--;
	      } 		    
	  return me;
	}
}	