import java.util.Scanner;
public class EX21
{ public static void main(String args[])
  { Scanner entrada = new Scanner(System.in);
    int x,y, soma;
    System.out.print("Digite o valor de x ");
    x = entrada.nextInt();
    System.out.print("Digite o valor de y ");
    y = entrada.nextInt();
    
    while (x != y)
       { soma = primos(x, y);
         System.out.println("\n\nSoma dos numeros primos entre " + x + " e " + y + " (inclusive) = " + soma);
		 System.out.print("\n\nDigite o valor de x ");
		 x = entrada.nextInt();
		 System.out.print("Digite o valor de y ");
		 y = entrada.nextInt();         
	   } 
  }  
  public static int primos(int x, int y)
  { int i, j, r, cont, somatorio;
    somatorio = 0;
    for (i=x; i<=y;i++)
        { cont = 0;
          for (j=1;j<=i;j++)
              { r = i % j;
                if (r == 0)
                   cont = cont + 1;
              }
          if (cont <= 2)
             somatorio = somatorio + i;
        }
     return somatorio;
  }
}             