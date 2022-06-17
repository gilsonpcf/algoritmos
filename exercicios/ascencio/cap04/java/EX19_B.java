import java.util.*;

public class EX19_B
{
	public static void main (String args[])
	{
		float altura, peso;
		Scanner entrada;
		//Instancia o objeto da classe Scanner
		entrada = new Scanner(System.in);
		//Mostra mensagem solicitando valor da altura
  		System.out.print("Digite a altura ");
  		//Recebe o valor da altura
		altura = entrada.nextFloat();				
  		//Mostra mensagem solicitando valor do peso
  		System.out.println("Digite o peso ");
  		//Recebe o valor do peso
		peso = entrada.nextFloat();				
  		if (altura < 1.20)
     	{ 
     		if (peso <= 60)
	  		 System.out.println("Classificação A ");
       		else if (peso <= 90)
	  			  System.out.println("Classificação D ");
       			 else 
       			  System.out.println("Classificação G ");
     	}
  		else if (altura <= 1.70)
     		 {
     			if (peso <= 60)
	  			 System.out.println("Classificação B ");
       			else if (peso <= 90)
	  				  System.out.println("Classificação E ");
       				 else
	  				  System.out.println("Classificação H ");
     		 }
     		 else 
     		  { 
     			if (peso <= 60)
	  			  System.out.println("Classificação C ");
       			else if (peso <= 90)
	  				  System.out.println("Classificação F ");
       				 else 
	  				  System.out.println("Classificação I ");
	  		  }
     }
}