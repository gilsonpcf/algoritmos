import java.util.*;

public class EX5
{
	public static void main (String args[])
	{
		float sal, perc, aumento, novosal;	
		Scanner entrada;
		// Instancia o objeto da classe Scanner para receber as entradas
	    entrada = new Scanner(System.in);
   	    // Mostra mensagem antes da leitura do salário
  		System.out.println("Digite o salário do funcionário: ");
  		// Recebe o salário
  		sal = entrada.nextFloat();
  		// Mostra mensagem antes da leitura do percentual de aumento
		System.out.println("Digite o percentual de aumento: ");
		// Recebe o percentual de aumento
		perc = entrada.nextFloat();
		// Calcula o aumento
		aumento = sal * perc/100;
		// Mostra o aumento
		System.out.println("Aumento = " + aumento);
		// Calcula o novo salário
		novosal = sal + aumento;
		// Mostra o novo salário
		System.out.println("Novo salário = " + novosal);			
	}
}