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
		// Instancia o objeto da classe DecimalFormat para formatar n�meros
		casas = new DecimalFormat ("0.0#########"); 
       	// Mostra mensagem antes da leitura do n�mero real
		System.out.print("Digite um n�mero real: ");
		// Recebe um n�mero real
		num = entrada.nextDouble();
		// Extrai a parte inteira do n�mero,
		// armazenando-a na vari�vel i 
		i = (int)num;
		// Extrai a parte fracion�ria do n�mero, 
		// armazenando-a na vari�vel f
		f = num - i;
		// Arredonda o n�mero para baixo
		a = Math.floor(num);
		// Mostra a parte inteira do n�mero digitado
		System.out.println("Parte inteira do n�mero: " + i);
		// Mostra a parte fracion�ria do n�mero
		System.out.println("Parte fracion�ria do n�mero: " + casas.format(f));
		// Mostra o arredondamento do n�mero
		System.out.println("Arredondamento do n�mero: " + a);
	}
}