import java.util.*;

public class EX9
{
	public static void main (String args[])
	{
		float base, altura, area;
		Scanner entrada;
		// Instancia o objeto da classe Scanner para receber as entradas
	    entrada = new Scanner(System.in);
   	    // Mostra mensagem antes da leitura da base
		System.out.print("Digite a base do tri�ngulo: ");
		// Recebe a base		
  		base = entrada.nextFloat();
  		// Mostra mensagem antes da leitura da altura
		System.out.print("Digite a altura do tri�ngulo: ");
		// Recebe a altura		
  		altura = entrada.nextFloat();
  		// Calcula a �rea
		area = (base * altura)/2;
		// Mostra a �rea
		System.out.println("�rea do tri�ngulo = "+ area);
	}
}