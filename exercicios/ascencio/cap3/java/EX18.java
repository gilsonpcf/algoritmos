import java.util.*;

public class EX18
{
	public static void main (String args[])
	{
		float peso_saco, racao_gato1, racao_gato2, total_final;
		Scanner entrada;
		// Instancia o objeto da classe Scanner para receber as entradas
	    entrada = new Scanner(System.in);
		// Mostra mensagem antes da leitura do peso do saco de ra��o
		System.out.print("Digite o peso do saco de ra��o (em Kg): ");
		// Recebe peso do saco de ra��o
		peso_saco = entrada.nextFloat();
		// Mostra mensagem antes da leitura da quantidade do gato1
		System.out.print("Digite a ra��o consumida pelo 1� gato (em gramas): ");
		// Recebe a ra��o gasta com o 1� gato
		racao_gato1 = entrada.nextFloat();
		// Mostra mensagem antes da leitura da quantidade do gato2
		System.out.print("Digite a ra��o consumida pelo 2� gato (em gramas): ");
		// Recebe ra��o gasta com o 2� gato
		racao_gato2 = entrada.nextFloat();
		// Converte a ra��o do gato 1 para Kg
		racao_gato1 = racao_gato1 / 1000;
		// Converte a ra��o do gato 2 para Kg
		racao_gato2 = racao_gato2 / 1000;
		// Calcula o restante ap�s 5 dias
		total_final = peso_saco - 5 * (racao_gato1 + racao_gato2);
		// Mostra o restante
		System.out.println("Total de ra��o restante (em Kg): " + total_final);
	}
}