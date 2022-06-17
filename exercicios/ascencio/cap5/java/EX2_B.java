import java.util.*;
public class EX2_B 
{
  public static void main (String args[])
  	{
  		int n, i, j;
  		float e, fat;
  		Scanner dado = new Scanner(System.in);
  		System.out.print("Digite o valor de N: ");
  		n = dado.nextInt();
  		e = 1;
  		i = 1;
  		do
    	{ 	j = 1;
      		fat = 1;
      		do
			 {
				fat = fat * j;
				j = j + 1;
			 }
			while (j<=i);
			i = i + 1;
			e = e + 1/fat;
		}
		while (i <= n);
		System.out.println("Valor de E = " +e);	
    }
}