import java.util.*;

public class EX13
{
	public static void main (String args[])
	{
		double pes, polegadas, jardas, milhas;
		Scanner entrada;
		// Instancia o objeto da classe Scanner para receber as entradas
	    entrada = new Scanner(System.in);
   	    // Mostra mensagem antes da leitura da medida em pés
		System.out.print("Digite a medida em pés ");
		// Recebe a medida em pés
		pes = entrada.nextDouble();
		// Calcula a medida em polegadas
		polegadas = pes * 12;
		// Calcula a medida em jardas
		jardas = pes / 3;
		// Calcula a medida em milhas
		milhas = jardas / 1760;
		// Mostra a medida em polegadas
		System.out.println("Medida em polegadas = "+polegadas);
		// Mostra a medida em jardas
		System.out.println("Medida em jardas = "+jardas);
		// Mostra a medida em milhas
		System.out.println("Medida em milhas = "+milhas);
	}
}