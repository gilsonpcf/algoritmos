import java.util.Scanner;
public class EX14
{     public static void main(String args[])
	  { Scanner entrada = new Scanner(System.in);
	     int x, vet1[], vet2[], vet3[];
		  vet1 = new int[10];
		  vet2 = new int[10];
		  vet3 = new int[20];
		  for (x=0;x<10;x++)
		    { do {
			   System.out.print("Digite o " + (x+1) + "o elemento de A ");
			   vet1[x] = entrada.nextInt();
			 } while (vet1[x] < 0);
		    }
		  System.out.println();
		  for (x=0;x<10;x++)
		    { do {
			   System.out.print("Digite o " + (x+1) + "o elemento de B ");
			   vet2[x] = entrada.nextInt();
			 } while (vet2[x] < 0);
		    }
		  uniao(vet1,vet2,vet3);
		  x=0;
		  while ((x<20) && (vet3[x] != -1))
		    { System.out.print(vet3[x] + "  ");
		      x++;
		    }
		}
		
		public static void uniao(int a[], int b[], int u[])
		{ int i, j, k, cont;
		  for (i=0;i<20;i++)
		      u[i] = -1;
		  k=0;
		  for (i=0;i<10;i++)
		    { cont = 0;
		      while ((cont < k) && (a[i] != u[cont]))
			      cont++;
		      if (cont == k)
			     { u[k] = a[i];
			       k++;
			     }
		    }
		  for (i=0;i<10;i++)
		    { cont = 0;
		      while ((cont < k) && (b[i] != u[cont]))
			      cont++;
		      if (cont == k)
			     { u[k] = b[i];
			       k++;
			     }
		    }
		}
}		