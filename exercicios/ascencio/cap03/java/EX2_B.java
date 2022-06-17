import java.util.*;
import java.text.*;

public class EX2_B
{
	public static void main (String args[])
	{
		float nota1,nota2,nota3,soma,media;
	    Scanner entrada;
	    // Instancia o objeto da classe Scanner para receber as entradas
	    entrada = new Scanner(System.in);
   	    DecimalFormat casas;
   	    // Instancia o objeto da classe DecimalFormat para formatar n�meros fracion�rios
       	casas = new DecimalFormat ("0.00"); 
  	  	//Mostra mensagem antes da leitura das tr�s notas
	 	System.out.println("Digite tr�s notas");
		// Recebe as tr�s notas
		nota1 = entrada.nextFloat();
		nota2 = entrada.nextFloat();
		nota3 = entrada.nextFloat();
		// Soma as notas digitadas
		soma = nota1 + nota2 + nota3;
		// Calcula a m�dia
		media = soma/3;
		// Mostra o resultado da m�dia formatado com duas casas decimais
		System.out.println("M�dia = "+casas.format(media));
	}
}