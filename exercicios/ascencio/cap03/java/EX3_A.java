import java.util.*;

public class EX3_A
{
	public static void main (String args[])
	{
		float nota1,nota2,nota3,peso1,peso2,peso3,media;
		Scanner entrada;
		// Instancia o objeto da classe Scanner para receber as entradas
	    entrada = new Scanner(System.in);
	    // Recebe as três notas e seus pesos
		nota1 = entrada.nextFloat();
		nota2 = entrada.nextFloat();
		nota3 = entrada.nextFloat();	
		peso1 = entrada.nextFloat();
		peso2 = entrada.nextFloat();
		peso3 = entrada.nextFloat();	
		// Calcula a média
		media = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3)/(peso1 + peso2 + peso3);
		// Mostra o resultado da média
		System.out.println(media);
	}
}