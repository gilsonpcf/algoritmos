import java.util.*;

public class EX10_A
{
	public static void main (String args[])
	{
		Double area, raio;
		Scanner entrada;
		// Instancia o objeto da classe Scanner para receber as entradas
	    entrada = new Scanner(System.in);
		// Mostra mensagem antes da leitura do raio
		System.out.print("Digite o raio: ");
		// Recebe o raio
		raio = entrada.nextDouble();
		// Calcula a área
		area = 3.1415 * raio * raio;
		// Mostra a área
		System.out.println("Área do círculo = "+ area);
	}
}