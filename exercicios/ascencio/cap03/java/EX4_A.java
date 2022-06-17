import java.util.*;

public class EX4_A
{
	public static void main (String args[])
	{
		float sal, novosal;	
		Scanner entrada;
	    // Instancia o objeto da classe Scanner para receber as entradas
	    entrada = new Scanner(System.in);
   	    // Mostra mensagem antes da leitura do salário
  		System.out.println("Digite o salário do funcionário: ");
  		// Recebe o salário
		sal = entrada.nextFloat();
  		// Calcula o novo salário
  		novosal = sal + sal * 25/100;
  		// Mostra o novo salário
  		System.out.println("Novo salário = " + novosal);
	}
}