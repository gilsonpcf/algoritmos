import java.util.*;

public class EX8
{
	public static void main (String args[])
	{
		float dep, taxa, rend, total;
		Scanner entrada;
		// Instancia o objeto da classe Scanner para receber as entradas
	    entrada = new Scanner(System.in);
   	    // Mostra mensagem antes da leitura do valor do depósito
		System.out.print("Digite o valor do depósito: ");
		// Recebe o valor do depósito
		dep = entrada.nextFloat();
		// Mostra mensagem antes da leitura da taxa de juros
		System.out.print("Digite a taxa de juros: ");
		// Recebe a taxa de juros
		taxa = entrada.nextFloat();
		// Calcula o rendimento
		rend = dep * taxa/100;
		// Calcula o total
		total = dep + rend;
		// Mostra o rendimento
		System.out.println("Rendimento = " + rend);
		// Mostra o total
		System.out.println("Total = " + total);
	}
}
