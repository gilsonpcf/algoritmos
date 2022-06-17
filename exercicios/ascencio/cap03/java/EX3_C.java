import java.util.*;

public class EX3_C
{
	public static void main (String args[])
	{
		float nota1,nota2,nota3,peso1,peso2,peso3,soma1,soma2,soma3,total,media;
		Scanner entrada;
		// Instancia o objeto da classe Scanner para receber as entradas
	    entrada = new Scanner(System.in);
   	    //Mostra mensagem antes da leitura da 1ª nota
		System.out.println("Digite a 1ª nota");
		// Recebe a 1ª nota
		nota1 = entrada.nextFloat();
		//Mostra mensagem antes da leitura do peso da 1ª nota
		System.out.println("Digite o peso da 1ª nota");
		// Recebe o 1º peso
		peso1 = entrada.nextFloat();
		//Mostra mensagem antes da leitura da 2ª nota
		System.out.println("Digite a 2ª nota");
		// Recebe a 2ª nota
		nota2 = entrada.nextFloat();
		//Mostra mensagem antes da leitura do peso da 2ª nota
		System.out.println("Digite o peso da 2ª nota");
		// Recebe o 2º peso
		peso2 = entrada.nextFloat();
		//Mostra mensagem antes da leitura da 3ª nota
		System.out.println("Digite a 3ª nota");
		// Recebe a 3ª nota
		nota3 = entrada.nextFloat();
		//Mostra mensagem antes da leitura do peso da 3ª nota
		System.out.println("Digite o peso da 3ª nota");
		// Recebe o 3º peso
		peso3 = entrada.nextFloat();
		// Calcula a média
		soma1=nota1 * peso1;
		soma2=nota2 * peso2;
		soma3=nota3 * peso3;
		total=peso1 + peso2 + peso3;
		media = (soma1 + soma2 + soma3)/total;
		// Mostra o resultado da média
		System.out.println("Média = "+media);
	}
}