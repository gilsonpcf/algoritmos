import java.util.*;

public class EX20
{
	public static void main (String args[])
	{
		Double ang, alt, escada, radiano;
		Scanner entrada;
		// Instancia o objeto da classe Scanner para receber as entradas
	    entrada = new Scanner(System.in);
		// Mostra mensagem antes da leitura do valor do ângulo
		System.out.print("Digite o valor do ângulo em graus: ");
		// Recebe valor de ângulo
		ang = entrada.nextDouble();
		// Mostra mensagem antes da leitura da altura da ponta da escada
		System.out.print("Digite a altura da parede onde está a ponta da escada: ");
		// Recebe valor da altura da parede onde está a ponta da escada
		alt = entrada.nextDouble();
		// Converte o ângulo digitado em graus para radianos
		radiano = ang * 3.14 / 180;
		// Calcula tamanho da escada
		escada = alt / Math.sin(radiano);
		// Mostra o tamanho da escada
		System.out.println("O comprimento da escada é "+ escada);
	}
}