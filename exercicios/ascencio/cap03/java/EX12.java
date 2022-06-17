import java.util.*;

public class EX12
{
	public static void main (String args[])
	{
		double num1, num2, r1, r2;
		Scanner entrada;
		// Instancia o objeto da classe Scanner para receber as entradas
	    entrada = new Scanner(System.in);
   	    // Mostra mensagem antes da leitura do 1º número
		System.out.println("Digite o 1º número: ");
		// Recebe o 1º número
		num1 = entrada.nextDouble();
		// Mostra mensagem antes da leitura do 2º número
		System.out.println("Digite o 2º número: ");
		// Recebe o 2º número
		num2 = entrada.nextDouble();
		// Calcula o 1º número elevado ao 2º número
		r1 = Math.pow (num1, num2);
		// Calcula o 2º número elevado ao 1º número
		r2 = Math.pow (num2, num1);
		// Mostra o 1º número elevado ao 2º número
		System.out.println("Resposta 1 = " + r1);
		// Mostra o 2º número elevado ao 1º número
		System.out.println("Resposta 2 = " + r2);	
	}
}