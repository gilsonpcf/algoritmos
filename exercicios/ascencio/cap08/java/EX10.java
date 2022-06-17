import java.util.Scanner;
public class EX10
{
  public static void main(String args[])
  { Scanner entrada = new Scanner(System.in);
    int num;
    float s;
    System.out.print("\nDigite um numero: ");
    num = entrada.nextInt();
    s = sequencia(num);
    System.out.println("\nValor da sequencia = "+ s);
  }
  public static float sequencia(int n)
  { int a, b;
    float f, seq;
    seq = 1;
    for (a=1;a<=n;a++)
      { f = 1;
        for (b=1;b<=a;b++)
	      { f = f * b;
	      }
        seq = seq + 1/f;
      }
    return seq;
  }  
}