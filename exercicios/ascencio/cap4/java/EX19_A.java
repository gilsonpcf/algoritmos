import java.util.*;

public class EX19_A
{
	public static void main (String args[])
	{
		float altura, peso;
		Scanner entrada;
		//Instancia o objeto da classe Scanner
		entrada = new Scanner(System.in);
		//Mostra mensagem solicitando valor da altura
  		System.out.print("Digite a altura ");
  		//Recebe a altura
  		altura = entrada.nextFloat();				
  		//Mostra mensagem solicitando valor do peso
  		System.out.println("Digite o peso ");
  		//Recebe o peso
  		peso = entrada.nextFloat();				
  		//Mostra a classifica��o
  		if (altura < 1.20)
     	{ 
     		if (peso <= 60)
	  		System.out.println("Classifica��o A ");
       		if (peso > 60 && peso <= 90)
	  		System.out.println("Classifica��o D ");
       		if (peso > 90)
	  		System.out.println("Classifica��o G ");
     	}
  		if (altura >= 1.20 && altura <= 1.70)
     	{
     		if (peso <= 60)
	  		System.out.println("Classifica��o B ");
       		if (peso > 60 && peso <= 90)
	  		System.out.println("Classifica��o E ");
       		if (peso > 90)
	  		System.out.println("Classifica��o H ");
     	}
  		if (altura > 1.70)
     	{ 
     		if (peso <= 60)
	  		System.out.println("Classifica��o C ");
       		if (peso > 60 && peso <= 90)
	  		System.out.println("Classifica��o F ");
       		if (peso > 90)
	  		System.out.println("Classifica��o I ");
	  	}
     }
}