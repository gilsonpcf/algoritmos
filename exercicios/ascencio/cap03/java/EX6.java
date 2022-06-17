import java.util.*;

public class EX6
{
	public static void main (String args[])
	{
		float sal, salreceber, grat, imp;	
		Scanner entrada;
		// Instancia o objeto da classe Scanner para receber as entradas
	    entrada = new Scanner(System.in);
   	    // Mostra mensagem antes da leitura do salário
  		System.out.print("Digite o salário do funcionário: ");
  		// Recebe o salário
  		sal = entrada.nextFloat();
  		// Calcula a gratificação
		grat = sal * 5/100;
		// Calcula o imposto
		imp = sal * 7/100;
		// Calcula o salário a receber
		salreceber = sal + grat - imp;
		// Mostra o salário a receber
		System.out.println("Novo salário = " + salreceber);			
	}
}