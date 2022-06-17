import java.util.Scanner;
public class EX13
{
    public static void main(String args[])
	{ Scanner entrada = new Scanner(System.in);
	  int x;
	  float vet1[], vet2[];
	  vet1 = new float[10];
	  vet2 = new float[10];	  

	  for (x=0;x<10;x++)
	    { System.out.print("Digite o " + (x+1) + "o elemento de A ");
	      vet1[x] = entrada.nextInt();
	    }
	  fatoriais(vet1,vet2);
	  for (x=0;x<10;x++)
	    { System.out.println("\nO fatorial de " + vet1[x] + " = " + vet2[x]);
	    }
	}

	public static void fatoriais(float a[], float b[])
	{ int i, j;
	  float f;
	  for (i=0;i<10;i++)
	    { if ((a[i] == 0) || (a[i] == 1))
		    b[i] = 1;
	      else
			{ b[i]=1;
			  for (j=1;j<=a[i];j++)
			    b[i] = b[i] * j;
			}
	    }
	}
}