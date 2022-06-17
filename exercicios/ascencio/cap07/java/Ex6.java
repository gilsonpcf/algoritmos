import java.util.Scanner;
public class Ex6
{ public static void main(String args[])
	{ Scanner entrada = new Scanner(System.in);
	  int a[][], b[][], c[][], i, j, k, soma, mult;

	  a = new int[4][5];
	  b = new int[5][2];
	  c = new int[4][2];
  
	  for (i=0;i<4;i++)
		{ for (j=0;j<5;j++)
			{ System.out.print("Digite o elemento " + i + "-" + j + ": ");
			  a[i][j] = entrada.nextInt();
			}
		}
	  System.out.println("\nDigitando os elementos da matriz B ");
	  for (i=0;i<5;i++)
		{ for (j=0;j<2;j++)
			{ System.out.print("Digite o elemento " + i + "-" + j + ": ");
			  b[i][j] = entrada.nextInt();
			}
		}
	  soma = 0;

//Calculando a matriz resultante
	  for (i=0;i<4;i++)
		{ for (k=0;k<2;k++)
			{ for (j=0;j<5;j++)
    			{ mult = a[i][j] * b[j][k];
      			  soma = soma + mult;
    			}
  			  c[i][k] = soma;
  			  soma = 0;
			}
		}
	  System.out.println("\nEscrevando a matriz resultante da multiplicao ");
	  for (i=0;i<4;i++)
		{ for (j=0;j<2;j++)
			{ System.out.println(c[i][j] + " ");
			}
  		  System.out.print("\n");
		}
   }   	
}
