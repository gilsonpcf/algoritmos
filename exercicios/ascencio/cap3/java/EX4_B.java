import java.util.*;

public class EX4_B
{
	public static void main (String args[])
	{
		float sal, aumento, novosal;	
		Scanner entrada;
		// Instancia o objeto da classe Scanner para receber as entradas
	    entrada = new Scanner(System.in);
   	    // Mostra mensagem antes da leitura do sal�rio
  		System.out.println("Digite o sal�rio do funcion�rio: ");
  		// Recebe o sal�rio
  		sal = entrada.nextFloat();
  		// Calcula o valor do aumento
   		aumento = sal * 25/100;
   		// Calcula o novo sal�rio
   		novosal = sal + aumento;
   		// Mostra o novo sal�rio
  		System.out.println("Novo sal�rio = " + novosal);
	}
}