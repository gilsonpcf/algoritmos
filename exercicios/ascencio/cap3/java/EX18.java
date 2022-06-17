import java.util.*;

public class EX18
{
	public static void main (String args[])
	{
		float peso_saco, racao_gato1, racao_gato2, total_final;
		Scanner entrada;
		// Instancia o objeto da classe Scanner para receber as entradas
	    entrada = new Scanner(System.in);
		// Mostra mensagem antes da leitura do peso do saco de ração
		System.out.print("Digite o peso do saco de ração (em Kg): ");
		// Recebe peso do saco de ração
		peso_saco = entrada.nextFloat();
		// Mostra mensagem antes da leitura da quantidade do gato1
		System.out.print("Digite a ração consumida pelo 1º gato (em gramas): ");
		// Recebe a ração gasta com o 1º gato
		racao_gato1 = entrada.nextFloat();
		// Mostra mensagem antes da leitura da quantidade do gato2
		System.out.print("Digite a ração consumida pelo 2º gato (em gramas): ");
		// Recebe ração gasta com o 2º gato
		racao_gato2 = entrada.nextFloat();
		// Converte a ração do gato 1 para Kg
		racao_gato1 = racao_gato1 / 1000;
		// Converte a ração do gato 2 para Kg
		racao_gato2 = racao_gato2 / 1000;
		// Calcula o restante após 5 dias
		total_final = peso_saco - 5 * (racao_gato1 + racao_gato2);
		// Mostra o restante
		System.out.println("Total de ração restante (em Kg): " + total_final);
	}
}