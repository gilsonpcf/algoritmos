import java.util.*;

public class EX20_B
{
	public static void main (String args[])
	{
		int cod_prod, cod_pais;
  		float peso_quilos, peso_gramas, pre_total, imposto=0, valor_total, pre_grama=0;
		Scanner entrada;
		//Instancia o objeto da classe Scanner
		entrada = new Scanner(System.in);
		// Mostra mensagem antes da leitura do c�digo do produto
  		System.out.println("Digite o c�digo do produto, um n�mero entre 1 e 10 ");
  		// Recebe o c�digo do produto
  		cod_prod = entrada.nextInt();
		// Mostra mensagem antes da leitura do peso do produto em quilos				
  		System.out.println("Digite o peso do produto em quilos ");
  		// Recebe o peso do produto em quilos
  		peso_quilos = entrada.nextFloat();				
		// Mostra mensagem antes da leitura do c�digo do pa�s
  		System.out.println("Digite o c�digo do pa�s, um n�mero entre 1 e 3 ");
  		// Recebe o c�digo do pa�s
  		cod_pais = entrada.nextInt();				
  		// Calcula o peso em gramas
    	peso_gramas = peso_quilos * 1000;
    	// Mostra o peso em gramas
  		System.out.println("Peso em gramas = " + peso_gramas);
  		// Calcula o pre�o da grama
  		if (cod_prod <= 4)
     	  pre_grama = 10;
  		else if (cod_prod <= 7)
     		   pre_grama = 25;
  			 else pre_grama = 35;
     	// Calcula o pre�o total
     	pre_total = peso_gramas * pre_grama;
     	// Mostra o pre�o total
  		System.out.println("Pre�o total = " + pre_total);
  		// Calcula o imposto
  		if (cod_pais == 1)
     	  imposto = 0;
  		else if (cod_pais == 2)
     		  imposto = pre_total * 15/100;
  			 else
     		  imposto = pre_total * 25/100;
     	// Mostra o imposto
  		System.out.println("Imposto = " + imposto);
  		// Calcula o valor total
  		valor_total = pre_total + imposto;
  		// Mostra o valor total
  		System.out.println("Valor Total = " + valor_total);
	}
}