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
  		//Mostra a classificação
  		if (altura < 1.20)
     	{ 
     		if (peso <= 60)
	  		System.out.println("Classificação A ");
       		if (peso > 60 && peso <= 90)
	  		System.out.println("Classificação D ");
       		if (peso > 90)
	  		System.out.println("Classificação G ");
     	}
  		if (altura >= 1.20 && altura <= 1.70)
     	{
     		if (peso <= 60)
	  		System.out.println("Classificação B ");
       		if (peso > 60 && peso <= 90)
	  		System.out.println("Classificação E ");
       		if (peso > 90)
	  		System.out.println("Classificação H ");
     	}
  		if (altura > 1.70)
     	{ 
     		if (peso <= 60)
	  		System.out.println("Classificação C ");
       		if (peso > 60 && peso <= 90)
	  		System.out.println("Classificação F ");
       		if (peso > 90)
	  		System.out.println("Classificação I ");
	  	}
     }
}