import java.util.*;

public class EX12
{
	public static void main (String args[])
	{
		double num1, num2, r1, r2;
		Scanner entrada;
		// Instancia o objeto da classe Scanner para receber as entradas
	    entrada = new Scanner(System.in);
   	    // Mostra mensagem antes da leitura do 1� n�mero
		System.out.println("Digite o 1� n�mero: ");
		// Recebe o 1� n�mero
		num1 = entrada.nextDouble();
		// Mostra mensagem antes da leitura do 2� n�mero
		System.out.println("Digite o 2� n�mero: ");
		// Recebe o 2� n�mero
		num2 = entrada.nextDouble();
		// Calcula o 1� n�mero elevado ao 2� n�mero
		r1 = Math.pow (num1, num2);
		// Calcula o 2� n�mero elevado ao 1� n�mero
		r2 = Math.pow (num2, num1);
		// Mostra o 1� n�mero elevado ao 2� n�mero
		System.out.println("Resposta 1 = " + r1);
		// Mostra o 2� n�mero elevado ao 1� n�mero
		System.out.println("Resposta 2 = " + r2);	
	}
}