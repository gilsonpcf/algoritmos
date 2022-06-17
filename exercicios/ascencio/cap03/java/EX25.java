import java.util.*;

public class EX25
{
	public static void main (String args[])
	{
		float custo, convite, qtd;
		Scanner entrada;
		// Instancia o objeto da classe Scanner para receber as entradas
	    entrada = new Scanner(System.in);
		// Mostra mensagem antes da leitura do custo do espetáculo
		System.out.print("Digite o custo do espetáculo: ");
		// Recebe o custo do espetáculo
		custo = entrada.nextFloat();
		// Mostra mensagem antes da leitura do preço do convite
		System.out.print("Digite o preço do convite: ");
		// Recebe o preço do convite
		convite = entrada.nextFloat();
		// Calcula o total de convites necessários para cobrir as despesas
		qtd = custo / convite;
		// Mostra quantidade calculada
		System.out.println("Quantidade de convites necessária: "+ qtd);
 	}
}