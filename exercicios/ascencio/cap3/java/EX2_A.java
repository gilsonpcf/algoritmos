import java.util.*;

public class EX2_A
{
	public static void main (String args[])
	{
		float nota1,nota2,nota3,media;
		Scanner entrada;
		// Instancia o objeto da classe Scanner para receber as entradas
   	   	entrada = new Scanner(System.in); 
   	    // Recebe as tr�s notas
		nota1 = entrada.nextFloat();
		nota2 = entrada.nextFloat();
		nota3 = entrada.nextFloat();
		// Calcula a m�dia
		media = (nota1 + nota2 + nota3)/3;
		// Mostra o resultado da m�dia
		System.out.println(media);
	}
}