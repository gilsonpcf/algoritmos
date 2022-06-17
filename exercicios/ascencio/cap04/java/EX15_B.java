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
		// Mostra mensagem antes da leitura do sal�rio m�nimo
		System.out.println("Digite o valor do sal�rio m�nimo");
		// Recebe o sal�rio m�nimo
		sal_min = entrada.nextFloat();		
		// Mostra mensagem antes da leitura das horas trabalhadas
  		System.out.println( "Digite o n�mero de horas trabalhadas");
  		// Recebe o n�mero de horas trabalhadas
  		nht = entrada.nextFloat();		
		// Mostra mensagem antes da leitura do n�mero de dependentes
  		System.out.println("Digite o n�mero de dependentes ");
  		// Recebe o n�mero de dependentes
  		ndep = entrada.nextInt();		
		// Mostra mensagem antes da leitura das horas extras trabalhadas
  		System.out.println("Digite o n�mero de horas extras trabalhadas ");
  		// Recebe o n�mero de horas extras trabalhadas
  		nhet = entrada.nextFloat();		
		// C�lculo do valor da hora trabalhada
  		vh = sal_min * 1/5;
  		// C�lculo do sal�rio do m�s
  		smes = nht * vh;
  		// C�lculo do valor dos dependentes
  		vdep = ndep * 32;
  		// C�lculo do valor da hora extra
  		vhe = nhet * (vh + (vh * 50/100));
  		// C�lculo do sal�rio bruto
  		sbruto = smes + vdep + vhe;
  		// C�lculo do imposto
  		if (sbruto < 200)
     	  imp = 0;
  		else if (sbruto <= 500)
     		   imp = sbruto * 10/100;
  			 else 	
     		   imp = sbruto * 20/100;
     	// C�lculo do sal�rio l�quido
  		sliq = sbruto - imp;
  		// C�lculo da gratifica��o
  		if (sliq <= 350)
     	  grat = 100;
  		else 
     	  grat = 50;
     	// C�lculo do sal�rio a receber
  		sal_receber = sliq + grat;
  		// Mostra sal�rio a receber calculado
  		System.out.println("Sal�rio a receber = " +sal_receber);
 	}
}