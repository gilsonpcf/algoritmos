import java.util.*;

public class EX15
{
	public static void main (String args[])
	{
		float p_fab, perc_d, perc_i, vlr_d, vlr_i, p_final;
		Scanner entrada;
		// Instancia o objeto da classe Scanner para receber as entradas
	    entrada = new Scanner(System.in);
		// Mostra mensagem antes da leitura do preço de fábrica
		System.out.print("Digite o preço de fábrica: ");
		// Recebe o preço de fábrica
		p_fab = entrada.nextFloat();
		// Mostra mensagem antes da leitura do percentual do distribuidor
		System.out.print("Digite o percentual de lucro do distribuidor: ");
		// Recebe o percentual de lucro do distribuidor
		perc_d = entrada.nextFloat();
		// Mostra mensagem antes da leitura do percentual de impostos
		System.out.print("Digite o percentual de impostos: ");
		// Recebe o percentual de impostos
		perc_i = entrada.nextFloat();
		// Calcula o valor do lucro do distribuidor
		vlr_d = p_fab * perc_d / 100;
		// Calcula o valor dos impostos
		vlr_i  = p_fab * perc_i / 100;
		// Calcula o preço final do veículo
		p_final = p_fab + vlr_d + vlr_i;
		// Mostra o lucro do distribuidor calculado
		System.out.println("O lucro do distribuidor é " + vlr_d);
		// Mostra o valor calculado dos impostos
		System.out.println("O valor dos impostos é " + vlr_i);
		// Mostra o preço final do veículo ao consumidor
		System.out.println("O preço final do veículo ao consumidor é " +p_final);
	}
}