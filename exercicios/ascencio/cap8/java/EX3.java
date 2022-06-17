import java.util.Scanner;
public class EX3
{
  public static void main(String args[])
  { Scanner entrada = new Scanner(System.in);
	int a, b, c, result;
    do
      { System.out.print("Digite o valor de a: ");
        a = entrada.nextInt();
      } while (a<=1);
    System.out.print("Digite o valor de b: ");
    b = entrada.nextInt();
    System.out.print("Digite o valor de c: ");
    c  = entrada.nextInt();
    result = divisores(a, b, c);
    System.out.println("\nSoma dos inteiros = " + result);
  }
  public static int divisores(int a, int b, int c)
  { int i, s, r;
    s = 0;
    for (i=b;i<=c;i++)
      { r = (i % a);
        if (r == 0)
	       s = s + i;
      }
    return s;
  }
}  
