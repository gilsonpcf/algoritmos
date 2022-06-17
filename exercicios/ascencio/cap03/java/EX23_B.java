import java.util.*;
import java.text.*;

public class EX23_B
{
	public static void main (String args[])
	{
		double a,num,f;
		int i;
		Scanner entrada;
		// Instancia o objeto da classe Scanner para receber as entradas
	    entrada = new Scanner(System.in);
		DecimalFormat casas;
		// Instancia o objeto da classe DecimalFormat para formatar números
		casas = new DecimalFormat ("0.0#########"); 
       	// Mostra mensagem antes da leitura do número real
		System.out.print("Digite um número real: ");
		// Recebe um número real
		num = entrada.nextDouble();
		// Extrai a parte inteira do número,
		// armazenando-a na variável i 
		i = (int)num;
		// Extrai a parte fracionária do número, 
		// armazenando-a na variável f
		f = num - i;
		// Arredonda o número para baixo
		a = Math.floor(num);
		// Mostra a parte inteira do número digitado
		System.out.println("Parte inteira do número: " + i);
		// Mostra a parte fracionária do número
		System.out.println("Parte fracionária do número: " + casas.format(f));
		// Mostra o arredondamento do número
		System.out.println("Arredondamento do número: " + a);
	}
}