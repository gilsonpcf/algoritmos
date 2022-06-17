import java.util.*;

public class EX11
{
	public static void main (String args[])
	{
		double num, quad, cubo, r2, r3;
		Scanner entrada;
		// Instancia o objeto da classe Scanner para receber as entradas
	    entrada = new Scanner(System.in);
   	  	// Mostra mensagem antes da leitura do n�mero
		System.out.print("Digite um n�mero: ");
		// Recebe o n�mero		
		num = entrada.nextDouble();
		// Calcula o n�mero ao quadrado
		quad = Math.pow(num,2);
		// Calcula o n�mero ao cubo
		cubo = Math.pow(num,3);
		// Calcula a raiz quadrada do n�mero
		r2 = Math.sqrt(num);
		// Calcula a raiz c�bica do n�mero
		r3 = Math.cbrt(num);
		// Mostra o n�mero ao quadrado
		System.out.println("N�mero ao quadrado  = " + quad);
		// Mostra o n�mero ao cubo
		System.out.println("N�mero ao cubo  = " + cubo);
		// Mostra a raiz quadrada do n�mero
		System.out.println("Raiz quadrada   = " + r2);
		// Mostra a raiz c�bica do n�mero
		System.out.println("Raiz c�bica  = " + r3);
	}
}