import java.util.*;
import java.text.*;

public class EX24
{
	public static void main (String args[])
	{
		double pre, valor_adic=0, imposto, pre_custo, desconto, novo_pre;
  		char tipo, refrig;
  		Scanner entrada;
  		//Instancia o objeto da classe Scanner
		entrada = new Scanner(System.in);
  		DecimalFormat casas;
       	casas = new DecimalFormat ("0.00"); 
  		// Mostra mensagem antes da leitura do pre�o do produto
		System.out.println("Digite o pre�o do produto ");
		// Recebe o pre�o do produto
		pre = entrada.nextDouble(); 
		// Mostra mensagem antes da leitura do tipo do produto
		System.out.println("Digite o tipo do produto (A - alimenta��o, L - Limpeza e V - Vestu�rio) ");
  		// Recebe o tipo do produto
  		tipo = entrada.next().charAt(0);
  		// Mostra mensagem antes da leitura da refrigera��o
  		System.out.println("Digite S ou N para a necessidade de refrigera��o do produto ");
  		// Recebe a refrigera��o
  		refrig = entrada.next().charAt(0);
		// Calcula o valor adicional
  		if (refrig == 'N')
     	{ 
     		if (tipo == 'A')
	  		{ 
	  			if (pre < 15)
	       		  valor_adic = 2;
	    		else
	       		  valor_adic = 5;
	  		}
			if (tipo == 'L')
	   		{ 
	   			if (pre < 10)
				  valor_adic = 1.50;
	     		else
				  valor_adic = 2.50;
	   		}
	 		if (tipo == 'V')
	    	{ 
	    		if (pre < 30)
		 		  valor_adic = 3;
	      		else 
	      		  valor_adic = 2.5;
	     	}
    	}
  	   else
     	{ 
     		if (tipo == 'A')
	  		  valor_adic = 8;
       		if (tipo == 'L')
	  		  valor_adic = 0;
       		if (tipo == 'V')
	  		  valor_adic = 0;
    	}
  		System.out.println("Valor adicional = "+casas.format(valor_adic));
  		//Calcula o imposto
  		if (pre < 25)
     	  imposto = pre * 5/100;
  		else
     	  imposto = pre * 8/ 100;
     	//Mostra o imposto  
  		System.out.println("Valor do imposto = "+casas.format(imposto));
  		//Calcula o pre�o de custo
  		pre_custo = pre + imposto;
  		//Mostra o pre�o de custo
  		System.out.println("Valor do pre�o de custo = "+casas.format(pre_custo));
  		//Calcula o desconto
  		if (tipo != 'A' && refrig != 'S')
     	  desconto = pre_custo * 3/ 100;
  		else
     	  desconto = 0;
     	//Mostra o desconto
  		System.out.println("Valor do desconto = "+casas.format(desconto));
  		//Calcula o novo pre�o
  		novo_pre = pre + valor_adic - desconto;
  		//Mostra o novo pre�o
  		System.out.println("Valor do novo pre�o = "+casas.format(novo_pre));
  		//Mostra a classifica��o
  		if (novo_pre <= 50)
     	  System.out.println("Barato");
  		else if (novo_pre < 100)
			  System.out.println("Normal");
     		else	
			  System.out.println("Caro");
	}
}