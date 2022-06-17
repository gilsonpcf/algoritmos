import java.util.Scanner;
public class EX16
{ public static void main(String args[])
	{ Scanner entrada = new Scanner(System.in);
	  int x, vet1[], vet2[], vet3[];
	  vet1 = new int[10];
	  vet2 = new int[10];
	  vet3 = new int[20];

	  for (x=0;x<10;x++)
	    { System.out.print("Digite o " + (x+1) + "o elemento de A ");
	      vet1[x] = entrada.nextInt();
	    }
	  System.out.print("\n\n");
	  for (x=0;x<10;x++)
	    { System.out.print("Digite o " + (x+1) + "o elemento de B ");
	      vet2[x] = entrada.nextInt();
	    }
	  ordena_todos(vet1,vet2,vet3);
	  System.out.print("\n\nVetor ordenado \n\n");
	  for (x=0;x<20;x++)
		  System.out.print(vet3[x] + " ");
	}
	
   public static void ordena_todos(int a[], int b[], int c[])
	{ int i, j, k, cont;
	  k=0;
	  for (i=0;i<10;i++)
	    { cont = 0;
	      while ((cont < k) && (a[i] < c[cont]))
			 cont++;
	      if (cont == k)
			 { c[k] = a[i];
			   k++;
			 }
	      else
			 { for (j=k;j>cont;j--)
			     c[j] = c[j-1];
			   c[cont] = a[i];
			   k++;
			 }
	    }
	  for (i=0;i<10;i++)
	    { cont = 0;
	      while ((cont < k) && (b[i] < c[cont]))
			 cont++;
	      if (cont == k)
			 { c[k] = b[i];
			   k++;
			 }
	      else
			 { for (j=k;j>cont;j--)
			     c[j] = c[j-1];
			   c[cont] = b[i];
			   k++;
			 }
	    }
	}
}	
	