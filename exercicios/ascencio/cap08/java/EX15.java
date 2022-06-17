import java.util.Scanner;
public class EX15
{   public static void main(String args[])
	{ Scanner entrada = new Scanner(System.in);
	  int x, vet[];
	  vet = new int[5];
	  for (x=0;x<5;x++)
	    { System.out.print("Digite o " + (x+1) + "o elemento de A ");
	      vet[x] = entrada.nextInt();
	    }
	  ordena(vet);
	  System.out.print("\n\nVetor ordenado \n\n");
	  for (x=0;x<5;x++)
	    System.out.print(vet[x] + " ");
	}

	public static void ordena(int v[])
	{ int i, j, aux;
	  for (i=0;i<5;i++)
	    { for (j=0;j<4;j++)
			{ if (v[j] > v[j+1])
			     { aux = v[j];
			       v[j] = v[j+1];
			       v[j+1] = aux;
			     }
			
	    	}
		}
	}	
}		
	