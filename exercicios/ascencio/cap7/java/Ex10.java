import java.util.Scanner;
public class Ex10
{ public static void main(String args[])
	{ Scanner entrada = new Scanner(System.in);
	  int mat[][], aux, i, j;

	  mat = new int[10][10];

  	
  	System.out.println("\nDigitando os n£meros da matriz 10 X 10 ");
  	
	for (i=0;i<10;i++)
	    { for (j=0;j<10;j++)
			{ System.out.print("Digite o elemento " + i + "-" + j + " ");
			  mat[i][j] = entrada.nextInt();
			}
	    }
//trocando a linha 2 com a linha 8
	  for (j=0;j<10;j++)
	    { aux = mat[1][j];
	      mat[1][j] = mat[7][j];
	      mat[7][j] = aux;
	    }

//trocando a coluna 4 com a coluna 10

	  for (i=0;i<10;i++)
	    { aux = mat[i][3];
	      mat[i][3] = mat[i][9];
	      mat[i][9] = aux;
	    }

//trocando a diagonal principal com a diagonal secundária

	  j = 9;
	  for (i=0;i<10;i++)
	    { aux = mat[i][i];
	      mat[i][i] = mat[i][j];
	      mat[i][j] = aux;
		  j--;
	    }
//trocando a linha 5 com a coluna 10
	  for (j=0;j<10;j++)
	    { aux = mat[4][j];
	      mat[4][j] = mat[j][9];
	      mat[j][9] = aux;
	    }
	  System.out.println("\nMatriz ap¢s as altera‡äes ");
	  for (i=0;i<10;i++)
	    { for (j=0;j<10;j++)
			{ System.out.println(mat[i][j] + " ");
			}
		  System.out.print("\n");
	    }
   }   
} 

