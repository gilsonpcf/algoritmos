import java.util.Scanner;
public class EX17
{ public static void main(String args[])
	{ Scanner entrada = new Scanner(System.in);
      int x, y, s, matriz[][];
      matriz = new int[5][5];

	  for (x=0;x<5;x++)
	    { for (y=0;y<5;y++)
			{ System.out.print("Digite o elemento " + x + "-" + y + " ");
			  matriz[x][y] = entrada.nextInt();
			}
	    }
	  s=soma_matriz(matriz);
	  System.out.println("\n\nA soma dos elementos da matriz e " + s);
	}
	
	
  public static int soma_matriz(int m[][])
	{ int i, j, soma;
	  soma=0;
	  for (i=0;i<5;i++)
	    for (j=0;j<5;j++)
	      soma = soma + m[i][j];
	  return soma;
	}
}	