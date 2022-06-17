import java.util.*;
public class EX11_B 
{
  public static void main (String args[])
  	{
  		Scanner dado = new Scanner(System.in);
  		int i, num, qtde;
  		System.out.print("Digite um número: ");
  		num = dado.nextInt();
  		qtde = 0;
  		i = 1;
  		do
		 {
			if (num%i == 0)
				qtde = qtde + 1;
			i = i + 1;
		 }
		while (i <= num);
  		if (qtde > 2)
		 System.out.println("Número não primo");
  		else
     	 System.out.println("Número primo");
  	}
}