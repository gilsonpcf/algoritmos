import java.util.Scanner;
public class Ex16
{ public static void main(String args[])
  { Scanner entrada = new Scanner(System.in);
    float mat[][], vet1[], vet2[], maior, menor;
	int i, j;
    
    mat = new float[7][7];
	vet1 = new float[7];
	vet2 = new float[7];
	  
    for (i=0;i<7;i++)
	    { for (j=0;j<7;j++)
			{ System.out.print("\nDigite o valor do elemento " + i + "-" + j + " ");
			  mat[i][j] = entrada.nextFloat();
			}
	    }
    for (i=0;i<7;i++)
	    { maior = mat[i][0];
	      for (j=1;j<7;j++)
			{ if (mat[i][j] > maior)
			     maior = mat[i][j];
			}
	      vet1[i] = maior;
		}
    for (i=0;i<7;i++)
	    { menor = mat[0][i];
	      for (j=1;j<7;j++)
			{ if (mat[j][i] < menor)
			     menor = mat[j][i];
			}
	      vet2[i] = menor;
	    }
	System.out.println("\n\nValores armazenados na matriz ");
	for (i=0;i<7;i++)
	    { for (j=0;j<7;j++)
			{ System.out.print("\nElemento " + i + "-" + j + " " + mat[i][j]);
			}
	    }
	System.out.println("\n\nVetor com os maiores valores de cada linha ");
	for (i=0;i<7;i++)
	    System.out.print(vet1[i] + " ");
	
	System.out.println("\n\nVetor com os menores valores de cada coluna ");
	for (i=0;i<7;i++)
	     System.out.print(vet2[i] + " ");
   }		
}