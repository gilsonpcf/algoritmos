import java.util.*;

public class EX11
{
	public static void main (String args[])
	{
		double num, quad, cubo, r2, r3;
		Scanner entrada;
		// Instancia o objeto da classe Scanner para receber as entradas
	    entrada = new Scanner(System.in);
   	  	// Mostra mensagem antes da leitura do número
		System.out.print("Digite um número: ");
		// Recebe o número		
		num = entrada.nextDouble();
		// Calcula o número ao quadrado
		quad = Math.pow(num,2);
		// Calcula o número ao cubo
		cubo = Math.pow(num,3);
		// Calcula a raiz quadrada do número
		r2 = Math.sqrt(num);
		// Calcula a raiz cúbica do número
		r3 = Math.cbrt(num);
		// Mostra o número ao quadrado
		System.out.println("Número ao quadrado  = " + quad);
		// Mostra o número ao cubo
		System.out.println("Número ao cubo  = " + cubo);
		// Mostra a raiz quadrada do número
		System.out.println("Raiz quadrada   = " + r2);
		// Mostra a raiz cúbica do número
		System.out.println("Raiz cúbica  = " + r3);
	}
}