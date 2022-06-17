import java.util.*;

public class EX10_B
{
	public static void main (String args[])
	{
		double area, raio;
		Scanner entrada;
		// Instancia o objeto da classe Scanner para receber as entradas
	    entrada = new Scanner(System.in);
		// Mostra mensagem antes da leitura do raio
		System.out.print("Digite o raio: ");
		// Recebe o raio
		raio = entrada.nextDouble();
		// Calcula a área
		area = 3.1415 * Math.pow(raio,2);
		// Mostra a área
		System.out.println("Área do círculo = "+ area);
	}
}