import java.util.Scanner;
public class EX2
{
  public static void main(String args[])
  { Scanner entrada = new Scanner(System.in);
    int num1, num2, s;
    System.out.print("Digite o 1o numero: ");
    num1 = entrada.nextInt();
    System.out.print("Digite o 2o numero: ");
    num2 = entrada.nextInt();
    s = somar(num1, num2);
    System.out.println("\nSoma = " + s);
  }
 
  public static int somar(int num1, int num2)
  { int i, s;
    s = 0;
    for (i=num1+1;i<=num2-1;i++)
      { s = s + i;
      }
    return s;
  }
}  
  
