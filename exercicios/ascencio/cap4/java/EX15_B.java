import java.util.*;

public class EX15_B
{
	public static void main (String args[])
	{
		float sal_min, nht, nhet, sal_receber, vh, smes, vdep, vhe, imp=0, sbruto, sliq, grat=0;
		int ndep;
		Scanner entrada;
		//Instancia o objeto da classe Scanner
		entrada = new Scanner(System.in);  
		// Mostra mensagem antes da leitura do salário mínimo
		System.out.println("Digite o valor do salário mínimo");
		// Recebe o salário mínimo
		sal_min = entrada.nextFloat();		
		// Mostra mensagem antes da leitura das horas trabalhadas
  		System.out.println( "Digite o número de horas trabalhadas");
  		// Recebe o número de horas trabalhadas
  		nht = entrada.nextFloat();		
		// Mostra mensagem antes da leitura do número de dependentes
  		System.out.println("Digite o número de dependentes ");
  		// Recebe o número de dependentes
  		ndep = entrada.nextInt();		
		// Mostra mensagem antes da leitura das horas extras trabalhadas
  		System.out.println("Digite o número de horas extras trabalhadas ");
  		// Recebe o número de horas extras trabalhadas
  		nhet = entrada.nextFloat();		
		// Cálculo do valor da hora trabalhada
  		vh = sal_min * 1/5;
  		// Cálculo do salário do mês
  		smes = nht * vh;
  		// Cálculo do valor dos dependentes
  		vdep = ndep * 32;
  		// Cálculo do valor da hora extra
  		vhe = nhet * (vh + (vh * 50/100));
  		// Cálculo do salário bruto
  		sbruto = smes + vdep + vhe;
  		// Cálculo do imposto
  		if (sbruto < 200)
     	  imp = 0;
  		else if (sbruto <= 500)
     		   imp = sbruto * 10/100;
  			 else 	
     		   imp = sbruto * 20/100;
     	// Cálculo do salário líquido
  		sliq = sbruto - imp;
  		// Cálculo da gratificação
  		if (sliq <= 350)
     	  grat = 100;
  		else 
     	  grat = 50;
     	// Cálculo do salário a receber
  		sal_receber = sliq + grat;
  		// Mostra salário a receber calculado
  		System.out.println("Salário a receber = " +sal_receber);
 	}
}