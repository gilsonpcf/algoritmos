import java.util.*;
public class EX14_B
{
  public static void main (String args[])
  	{
  		Scanner dado = new Scanner(System.in);
  		float valor_inicial, juros, valor_parc, total, valor_juros;
		int num_parc, i, lin;
		System.out.println("Digite o valor inicial da dívida: ");
		valor_inicial = dado.nextFloat();
		System.out.println("Valor da dívida		Valor dos juros Quantidade de parcelas Valor da parcela");
		juros = 0;
		num_parc = 1;
		total = valor_inicial;
		valor_parc = valor_inicial;
		System.out.println("  "+total+"               "+juros+"               "+num_parc+"          "+valor_parc);
		juros = juros + 10;
		num_parc = num_parc + 2;
		i=1;
		while (i<=4)
		{
		valor_juros = valor_inicial * juros / 100;
		total = valor_inicial + valor_juros;
		valor_parc = total / num_parc;
		System.out.println("  "+total+"               "+juros+"               "+num_parc+"          "+valor_parc);
		juros = juros + 5;
		num_parc = num_parc + 3;
		i = i + 1;
		}
  	}
}