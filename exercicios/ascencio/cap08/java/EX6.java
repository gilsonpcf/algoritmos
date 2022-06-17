import java.util.Scanner;
public class EX6
{
  public static void multiplicacao(int n)
	{ int i,j, l, c;
	  l=5;
	  c=5;
	  for (i=1;i<=n;i++)
	    { for (j=1;j<=i;j++)
			{ if (i*j < 10)
			      System.out.print(" " + i*j + " ");
			  else    
			  	  System.out.print(i*j + " ");
			}
	   System.out.println();    
	   }
	}

  public static void main(String args[])
	{ Scanner entrada = new Scanner(System.in);
	  int num;
	  do
	   { System.out.print("\nDigite um n£mero entre 1 e 9: ");
	     num = entrada.nextInt();
	   } while ((num <1) || (num>9));
	  multiplicacao(num);
	}
}