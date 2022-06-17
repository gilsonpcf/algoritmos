import java.util.*;

public class EX20_C
{
	public static void main (String args[])
	{
		int cod_prod, cod_pais;
  		float peso_quilos, peso_gramas, pre_total, imposto=0, valor_total, pre_grama=0;
		Scanner entrada;
		//Instancia o objeto da classe Scanner
		entrada = new Scanner(System.in);
		// Mostra mensagem antes da leitura do código do produto
  		System.out.println("Digite o código do produto, um número entre 1 e 10 ");
  		// Recebe o código do produto
  		cod_prod = entrada.nextInt();
		// Mostra mensagem antes da leitura do peso do produto em quilos				
  		System.out.println("Digite o peso do produto em quilos ");
  		// Recebe o peso do produto em quilos
  		peso_quilos = entrada.nextFloat();				
		// Mostra mensagem antes da leitura do código do país
  		System.out.println("Digite o código do país, um número entre 1 e 3 ");
  		// Recebe o código do país
  		cod_pais = entrada.nextInt();				
  		// Calcula o peso em gramas
    	peso_gramas = peso_quilos * 1000;
    	// Mostra o peso em gramas
  		System.out.println("Peso em gramas = " + peso_gramas);
  		// Calcula o preço da grama
  		switch(cod_prod)
    	{
      	case 1: pre_grama = 10;
	      break;
      	case 2: pre_grama = 10;
	      break;
      	case 3: pre_grama = 10;
	      break;
      	case 4: pre_grama = 10;
	      break;
      	case 5: pre_grama = 25;
	      break;
      	case 6: pre_grama = 25;
	      break;
      	case 7: pre_grama = 25;
	      break;
      	case 8: pre_grama = 35;
	      break;
      	case 9: pre_grama = 35;
	      break;
      	case 10: pre_grama = 35;
	      break;
   		}
     	// Calcula o preço total
     	pre_total = peso_gramas * pre_grama;
     	// Mostra o preço total
  		System.out.println("Preço total = " + pre_total);
  		// Calcula o imposto
  		switch(cod_pais)
    	{ 
    	case 1: imposto = 0;
	      break;
      	case 2: imposto = pre_total * 15/100;
	      break;
      	case 3: imposto = pre_total * 25/100;
      	  break;	
    	}
     	// Mostra o imposto
  		System.out.println("Imposto = " + imposto);
  		// Calcula o valor total
  		valor_total = pre_total + imposto;
  		// Mostra o valor total
  		System.out.println("Valor Total = " + valor_total);
	}
}