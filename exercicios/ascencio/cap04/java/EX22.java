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
 		// Mostra mensagem antes da leitura do sal�rio base
  		System.out.println("Digite o sal�rio base do funcion�rio");
  		// Recebe o sal�rio base
		sal_base = entrada.nextDouble();
		// Mostra mensagem antes da leitura do tempo de servi�o do funcion�rio
    	System.out.println("Digite o tempo de servi�o do funcion�rio");
  		// Recebe o tempo de servi�o
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
  		// Calcula a gratifica��o
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
    	// Mostra a gratifica��o
  		System.out.println("Gratifica��o = " + grat);
  		// Calcula o sal�rio l�quido
  		sal_liq = sal_base - imposto + grat;
  		// Mostra o sal�rio l�quido
  		System.out.println("Sal�rio l�quido = " +sal_liq);
  		// Mostra a classifica��o
  		if (sal_liq <= 350)
     	  System.out.println("Classifica��o A ");
  		else if (sal_liq <600)
			   System.out.println("Classifica��o B ");
     		 else 
     		 	System.out.println("Classifica��o C");
	}
}