import java.util.*;

public class EX6
{
	public static void main (String args[])
	{
		float sal, salreceber, grat, imp;	
		Scanner entrada;
		// Instancia o objeto da classe Scanner para receber as entradas
	    entrada = new Scanner(System.in);
   	    // Mostra mensagem antes da leitura do sal�rio
  		System.out.print("Digite o sal�rio do funcion�rio: ");
  		// Recebe o sal�rio
  		sal = entrada.nextFloat();
  		// Calcula a gratifica��o
		grat = sal * 5/100;
		// Calcula o imposto
		imp = sal * 7/100;
		// Calcula o sal�rio a receber
		salreceber = sal + grat - imp;
		// Mostra o sal�rio a receber
		System.out.println("Novo sal�rio = " + salreceber);			
	}
}