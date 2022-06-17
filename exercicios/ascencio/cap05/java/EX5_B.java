import java.util.*;
public class EX5_B 
{
  public static void main (String args[])
  	{
  		Scanner dado = new Scanner(System.in);
  		int expoente, i, x, j, fim, num_termos, den, denominador;
  		double s, fat;
  		System.out.print("Digite o número de termos da seqüência: ");
		num_termos = dado.nextInt();
		System.out.print("Digite o valor de X: ");
		x = dado.nextInt();
		s = 0;
		den = 0;
		denominador = 1;
		i = 1;
		while (i <= num_termos)
		{
			fim = denominador;
			fat = 1;
			for (j=1;j<=fim;j++)
				fat = fat * j;
			expoente = i+ 1;
			if (expoente % 2 == 0)
			 s = s - (Math.pow(x,expoente)/fat);
			else
			 s = s + (Math.pow(x,expoente)/fat);
			if (denominador == 4)
			 den = -1;
			if (denominador == 1)
			 den = 1;
			if (den == 1)
			 denominador = denominador + 1;
			else
			 denominador = denominador - 1;
			i++; 
		}
	System.out.println("Valor de S: " +s);
  	}
}