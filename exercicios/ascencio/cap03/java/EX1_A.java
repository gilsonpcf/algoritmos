import java.util.*;

public class EX1_A
{
	public static void main (String args[])
	{
		int n1,n2,n3,n4,soma;
	    Scanner entrada;
	    // Instancia o objeto da classe Scanner para receber as entradas
	    entrada = new Scanner(System.in);
		// Recebe os quatro números
		n1 = entrada.nextInt();
		n2 = entrada.nextInt();
		n3 = entrada.nextInt();
		n4 = entrada.nextInt();
		// Soma os números digitados
		soma = n1 + n2 + n3 + n4;
		// Mostra o resultado da soma
		System.out.println(soma);
	}
}