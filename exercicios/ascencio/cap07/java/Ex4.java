import java.util.Scanner;
public class Ex4
{ public static void main(String args[])
  { Scanner entrada = new Scanner(System.in);
    float mat[][], soma[];
    int i, j;
    
    mat = new float[10][20];
    soma = new float[10];

    for (i=0;i<10;i++)
	 { for (j=0;j<20;j++)
		{ System.out.print("\nDigite o elemento da linha " + i + " com a coluna " + j + " da matriz ");
  		  mat[i][j] = entrada.nextFloat();
        }
     }
    for (i=0;i<10;i++)
     { soma[i] = 0;
       for (j=0;j<20;j++)
           soma[i] = soma[i] + mat[i][j];
     }
    for (i=0;i<10;i++)
      { for (j=0;j<20;j++)
            mat[i][j] = mat[i][j] * soma[i];
      }
	
	System.out.println("\nImprimindo a matriz resultante");
    for (i=0;i<10;i++)
      { System.out.println("\nLinha " + i);
        for (j=0;j<20;j++)
			System.out.println(mat[i][j] + " ");
      }     
  }     
}
