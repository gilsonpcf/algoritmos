import java.util.*;

public class EX7
{
	public static void main (String args[])
	{
		float sal, salreceber, imp;	
		Scanner entrada;
		// Instancia o objeto da classe Scanner para receber as entradas
	    entrada = new Scanner(System.in);
   	    // Mostra mensagem antes da leitura do sal�rio
  		System.out.println("Digite o sal�rio do funcion�rio: ");
  		// Recebe o sal�rio
  		sal = entrada.nextFloat();
  		// Calcula o imposto
		imp = sal * 10/100;
		// Calcula o sal�rio a receber
		salreceber = sal + 50 - imp;
		// Mostra o sal�rio a receber
		System.out.println("Novo sal�rio = " + salreceber);			
	}
}