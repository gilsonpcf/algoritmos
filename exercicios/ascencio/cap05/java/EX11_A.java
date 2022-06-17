import java.util.*;
public class EX11_A 
{
  public static void main (String args[])
  	{
  		Scanner dado = new Scanner(System.in);
  		int i, num, qtde;
  		System.out.print("Digite um número: ");
  		num = dado.nextInt();
  		qtde = 0;
  		for (i=1;i<=num;i++)
		 {
			if (num%i == 0)
				qtde = qtde + 1;
		 }
		if (qtde > 2)
		 System.out.println("Número não primo");
  		else
     	 System.out.println("Número primo");
  	}
}