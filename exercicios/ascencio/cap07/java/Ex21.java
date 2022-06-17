import java.util.Scanner;
public class Ex21
{ public static void main(String args[])
	{ Scanner entrada = new Scanner(System.in);
	  int num[][], dim, l, c, soma, cont;
      
	  num = new int[100][100];

	  do
	    { System.out.print("\nDigite a dimensao da matriz (quadrada) - no maximo 100 ");
	      dim = entrada.nextInt();
	    } while ((dim < 1) || (dim > 100));
	  for (l=0;l<dim;l++)
	    { for (c=0;c<dim;c++)
			{ System.out.print("\nDigite o numero da posicao " + (l+1) + "-" + (c+1) + " ");
			  num[l][c] = entrada.nextInt();
			}
	    }
	  soma = 0;
	  cont = 0;
	  for (l=0;l<dim;l++)
	    { for (c=dim-1;c>dim-1-cont;c--)
			{ System.out.print(num[l][c] + " ");
			  soma = soma + num[l][c];
			}
	      cont++;
	    }
	  System.out.println("\nSoma = " + soma);
   } 		  
}
