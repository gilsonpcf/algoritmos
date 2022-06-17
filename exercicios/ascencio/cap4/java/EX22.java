import java.util.*;

public class EX22
{
	public static void main (String args[])
	{
		
		int tempo;
  		double sal_base, imposto, grat, sal_liq;
  		Scanner entrada;
		//Instancia o objeto da classe Scanner
		entrada = new Scanner(System.in);
 		// Mostra mensagem antes da leitura do salário base
  		System.out.println("Digite o salário base do funcionário");
  		// Recebe o salário base
		sal_base = entrada.nextDouble();
		// Mostra mensagem antes da leitura do tempo de serviço do funcionário
    	System.out.println("Digite o tempo de serviço do funcionário");
  		// Recebe o tempo de serviço
		tempo = entrada.nextInt();
  		// Calcula o imposto
  		if (sal_base < 200)
     	imposto = 0;
  		else if (sal_base <= 450)
			   imposto = sal_base * 3/100;
     		 else if (sal_base < 700)
	   				imposto = sal_base * 0.08;
				  else imposto = sal_base * 0.12;
		// Mostra o imposto
  		System.out.println("Imposto =  " +imposto);
  		// Calcula a gratificação
  		if (sal_base > 500)
     	{ 
     		if (tempo <= 3)
	  		  grat = 20;
       		else 
       		  grat = 30;
     	}
 		else 
    	{ 
    		if (tempo <= 3)
	 		grat = 23;
      		else if (tempo < 6)
	    		 	grat = 35;
	 			 else
	    			grat = 33;
    	}
    	// Mostra a gratificação
  		System.out.println("Gratificação = " + grat);
  		// Calcula o salário líquido
  		sal_liq = sal_base - imposto + grat;
  		// Mostra o salário líquido
  		System.out.println("Salário líquido = " +sal_liq);
  		// Mostra a classificação
  		if (sal_liq <= 350)
     	  System.out.println("Classificação A ");
  		else if (sal_liq <600)
			   System.out.println("Classificação B ");
     		 else 
     		 	System.out.println("Classificação C");
	}
}