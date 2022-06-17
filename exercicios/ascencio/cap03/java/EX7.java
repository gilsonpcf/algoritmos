import java.util.*;

public class EX7
{
	public static void main (String args[])
	{
		float sal, salreceber, imp;	
		Scanner entrada;
		// Instancia o objeto da classe Scanner para receber as entradas
	    entrada = new Scanner(System.in);
   	    // Mostra mensagem antes da leitura do salário
  		System.out.println("Digite o salário do funcionário: ");
  		// Recebe o salário
  		sal = entrada.nextFloat();
  		// Calcula o imposto
		imp = sal * 10/100;
		// Calcula o salário a receber
		salreceber = sal + 50 - imp;
		// Mostra o salário a receber
		System.out.println("Novo salário = " + salreceber);			
	}
}