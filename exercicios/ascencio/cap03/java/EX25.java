import java.util.*;

public class EX25
{
	public static void main (String args[])
	{
		float custo, convite, qtd;
		Scanner entrada;
		// Instancia o objeto da classe Scanner para receber as entradas
	    entrada = new Scanner(System.in);
		// Mostra mensagem antes da leitura do custo do espet�culo
		System.out.print("Digite o custo do espet�culo: ");
		// Recebe o custo do espet�culo
		custo = entrada.nextFloat();
		// Mostra mensagem antes da leitura do pre�o do convite
		System.out.print("Digite o pre�o do convite: ");
		// Recebe o pre�o do convite
		convite = entrada.nextFloat();
		// Calcula o total de convites necess�rios para cobrir as despesas
		qtd = custo / convite;
		// Mostra quantidade calculada
		System.out.println("Quantidade de convites necess�ria: "+ qtd);
 	}
}