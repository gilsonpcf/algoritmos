import java.util.*;

public class EX4_A
{
	public static void main (String args[])
	{
		float sal, novosal;	
		Scanner entrada;
	    // Instancia o objeto da classe Scanner para receber as entradas
	    entrada = new Scanner(System.in);
   	    // Mostra mensagem antes da leitura do sal�rio
  		System.out.println("Digite o sal�rio do funcion�rio: ");
  		// Recebe o sal�rio
		sal = entrada.nextFloat();
  		// Calcula o novo sal�rio
  		novosal = sal + sal * 25/100;
  		// Mostra o novo sal�rio
  		System.out.println("Novo sal�rio = " + novosal);
	}
}