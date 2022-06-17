import java.util.*;
import java.text.*;

public class EX2_C
{
	public static void main (String args[])
	{
		float nota1,nota2,nota3,media;
		Scanner entrada;
		// Instancia o objeto da classe Scanner para receber as entradas
	    entrada = new Scanner(System.in);
   	    DecimalFormat casas;
   	    // Instancia o objeto da classe DecimalFormat para formatar n�meros fracion�rios
		casas = new DecimalFormat ("0.00"); 
  	 	//Mostra mensagem antes da leitura da 1� nota
		System.out.println("Digite a 1� nota");
		// Recebe a 1� nota
		nota1 = entrada.nextFloat();
		//Mostra mensagem antes da leitura da 2� nota
		System.out.println("Digite a 2� nota");
		// Recebe a 2� nota
		nota2 = entrada.nextFloat();
		//Mostra mensagem antes da leitura da 3� nota
		System.out.println("Digite a 3� nota");
		// Recebe a 3� nota
		nota3 = entrada.nextFloat();
		// Calcula a m�dia
		media = (nota1+nota2+nota3)/3;
		// Mostra o resultado da m�dia formatado com duas casas decimais
		System.out.println("M�dia = "+casas.format(media));
	}
}