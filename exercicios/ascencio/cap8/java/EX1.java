import java.util.Scanner;
public class EX1
{
  public static void main(String args[])
  { Scanner entrada = new Scanner(System.in);
    int num;
    boolean x;
    System.out.print("Digite um n£mero: ");
    num = entrada.nextInt();
    x = verifica(num);
  	if (x==true)
       System.out.println("Numero positivo");
  	else
       System.out.println("Numero negativo");
  } //fim main 	 

  public static boolean verifica(int num)
  { boolean res;
    if (num >= 0)
       res = true;
    else
       res = false;
    return res;
  }  
}
