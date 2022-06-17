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
   	    // Instancia o objeto da classe DecimalFormat para formatar números fracionários
		casas = new DecimalFormat ("0.00"); 
  	 	//Mostra mensagem antes da leitura da 1ª nota
		System.out.println("Digite a 1ª nota");
		// Recebe a 1ª nota
		nota1 = entrada.nextFloat();
		//Mostra mensagem antes da leitura da 2ª nota
		System.out.println("Digite a 2ª nota");
		// Recebe a 2ª nota
		nota2 = entrada.nextFloat();
		//Mostra mensagem antes da leitura da 3ª nota
		System.out.println("Digite a 3ª nota");
		// Recebe a 3ª nota
		nota3 = entrada.nextFloat();
		// Calcula a média
		media = (nota1+nota2+nota3)/3;
		// Mostra o resultado da média formatado com duas casas decimais
		System.out.println("Média = "+casas.format(media));
	}
}