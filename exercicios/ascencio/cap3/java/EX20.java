import java.util.*;

public class EX20
{
	public static void main (String args[])
	{
		Double ang, alt, escada, radiano;
		Scanner entrada;
		// Instancia o objeto da classe Scanner para receber as entradas
	    entrada = new Scanner(System.in);
		// Mostra mensagem antes da leitura do valor do �ngulo
		System.out.print("Digite o valor do �ngulo em graus: ");
		// Recebe valor de �ngulo
		ang = entrada.nextDouble();
		// Mostra mensagem antes da leitura da altura da ponta da escada
		System.out.print("Digite a altura da parede onde est� a ponta da escada: ");
		// Recebe valor da altura da parede onde est� a ponta da escada
		alt = entrada.nextDouble();
		// Converte o �ngulo digitado em graus para radianos
		radiano = ang * 3.14 / 180;
		// Calcula tamanho da escada
		escada = alt / Math.sin(radiano);
		// Mostra o tamanho da escada
		System.out.println("O comprimento da escada � "+ escada);
	}
}