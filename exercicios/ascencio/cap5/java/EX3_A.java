import java.util.*;
public class EX3_A 
{
  public static void main (String args[])
  	{
  		Scanner dado = new Scanner(System.in);
  		int n, num, i, j, fat;
		System.out.print("Digite a quantidade de números que serao lidos: ");
		n = dado.nextInt();
		for (i=1;i<=n;i++)
		{ 
			System.out.println( "\nDigite o "+ i +"º número ");
			num=dado.nextInt();
			fat = 1;
			for (j=1;j<=num;j++)
				fat = fat * j;
			System.out.println("Fatorial de " +num+" = "+fat); 		
		}		
  	}
}