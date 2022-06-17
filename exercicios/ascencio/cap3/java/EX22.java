import java.util.*;

public class EX22
{
	public static void main (String args[])
	{
		double vlr_sal, qtd_kw, vlr_kw, vlr_reais, desc, vlr_desc;
		Scanner entrada;
		// Instancia o objeto da classe Scanner para receber as entradas
	    entrada = new Scanner(System.in);
		// Mostra mensagem antes da leitura do salário mínimo
		System.out.print("Digite o valor do salário mínimo: ");
		// Recebe o valor do salário mínimo
		vlr_sal = entrada.nextDouble();
		// Mostra mensagem antes da leitura da quantidade de quilowatts
		System.out.print("Digite a quantidade de Kws consumidos: ");
		// Recebe a quantidade de Kws
		qtd_kw = entrada.nextDouble();		
		// Calcula o valor de cada Kw
		vlr_kw = vlr_sal / 5;
		// Calcula o valor a pagar
		vlr_reais = vlr_kw * qtd_kw;
		// Calcula o desconto de 15%
		desc = vlr_reais * 15 / 100;
		// Calcula valor a pagar com desconto
		vlr_desc = vlr_reais - desc;
		// Mostra o valor do Kw
		System.out.println("Valor do Kw: "+ vlr_kw);
		// Mostra valor a ser pago	
		System.out.println("Valor a ser pago: " + vlr_reais);
		//Mostra valor a ser pago com desconto
		System.out.println("Valor a ser pago com desconto: " + vlr_desc);
	}
}