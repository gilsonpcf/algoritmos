import java.util.*;
public class EX17_A
{
  public static void main (String args[])
  	{
  		Scanner dado = new Scanner(System.in);
  		float sal_carlos, sal_joao;
  		int meses;
  		System.out.println("Digite o salário do Carlos ");
		sal_carlos = dado.nextFloat();
		sal_joao = sal_carlos / 3;
		meses = 0;
		while (sal_joao < sal_carlos)
		 { 
		 	 sal_carlos = sal_carlos + (sal_carlos * 2 / 100);
			 sal_joao = sal_joao + (sal_joao * 5 / 100);
			 meses = meses + 1;
		 }
		System.out.println("Meses = "+meses);
  	}
}