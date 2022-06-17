import java.util.*;

public class EX4_B
{
	public static void main (String args[])
	{
		float sal, aumento, novosal;	
		Scanner entrada;
		// Instancia o objeto da classe Scanner para receber as entradas
	    entrada = new Scanner(System.in);
   	    // Mostra mensagem antes da leitura do salário
  		System.out.println("Digite o salário do funcionário: ");
  		// Recebe o salário
  		sal = entrada.nextFloat();
  		// Calcula o valor do aumento
   		aumento = sal * 25/100;
   		// Calcula o novo salário
   		novosal = sal + aumento;
   		// Mostra o novo salário
  		System.out.println("Novo salário = " + novosal);
	}
}