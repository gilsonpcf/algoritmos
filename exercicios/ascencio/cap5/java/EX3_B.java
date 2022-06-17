import java.util.*;
public class EX3_B 
{
  public static void main (String args[])
  	{
  		Scanner dado = new Scanner(System.in);
  		int n, num, i, j, fat;
		System.out.print("Digite a quantidade de números que serao lidos: ");
		n = dado.nextInt();
		i = 1;
		while (i <= n)
		{
			System.out.print("Digite o "+i+"º número: ");
			num=dado.nextInt();
			fat = 1;
			j = 1;
			while (j <= num)
			{
				fat = fat * j;
				j = j +1;
			}
			System.out.println("Fatorial de " +num+" = "+fat); 		
			i = i + 1;
		}
  	}
}