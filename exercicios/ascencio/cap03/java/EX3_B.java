import java.util.*;

public class EX3_B
{
	public static void main (String args[])
	{
		float nota1,nota2,nota3,peso1,peso2,peso3,soma1,soma2,soma3,total,media;
		Scanner entrada;
		// Instancia o objeto da classe Scanner para receber as entradas
	    entrada = new Scanner(System.in);
   	    //Mostra mensagem antes da leitura das notas
		System.out.println("Digite as três notas");
		// Recebe as três notas
		nota1 = entrada.nextFloat();
		nota2 = entrada.nextFloat();
		nota3 = entrada.nextFloat();
		//Mostra mensagem antes da leitura dos pesos
		System.out.println("Digite os três pesos");
		// Recebe os três pesos
		peso1 = entrada.nextFloat();
		peso2 = entrada.nextFloat();
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