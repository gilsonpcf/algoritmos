import java.util.*;

public class EX21_B
{
	public static void main (String args[])
	{
		int cod_est, cod_carga;
  		float peso_toneladas, peso_quilos, pre_carga=0, imposto=0, valor_total;
		Scanner entrada;
		//Instancia o objeto da classe Scanner
		entrada = new Scanner(System.in);
		// Mostra mensagem antes da leitura do código do estado
		System.out.println("Digite o código do estado, um número entre 1 e 5 ");		
  		// Recebe o código do estado
  		cod_est = entrada.nextInt();
		// Mostra mensagem antes da leitura do peso da carga em toneladas				
  		System.out.println("Digite o peso da carga em toneladas ");
  		// Recebe o peso da carga em toneladas
  		peso_toneladas = entrada.nextFloat();				
		// Mostra mensagem antes da leitura do código da carga
  		System.out.println("Digite o código da carga, um número entre 10 e 40 ");
  		// Recebe o código da carga
  		cod_carga = entrada.nextInt();				
  		// Calcula o peso em quilos
    	peso_quilos = peso_toneladas * 1000;
    	// Mostra o peso em quilos
  		System.out.println("Peso em quilos = " + peso_quilos);
  		// Calcula o preço da carga
  		if (cod_carga <= 20)
     	  pre_carga = 100 * peso_quilos;
  		else if (cod_carga <= 30)
     			pre_carga = 250 * peso_quilos;
  			 else 
     			pre_carga = 340 * peso_quilos;
     	// Mostra o o preço da carga
  		System.out.println("Preço da carga = " +pre_carga);
  		// Calcula o imposto
  		if (cod_est == 1)
     	 imposto = pre_carga * 35/100;
  		else if (cod_est == 2)
       		  imposto = pre_carga * 25/100;
  			 else if (cod_est == 3)
     		  	   imposto = pre_carga * 15/100;
  			 	  else if (cod_est == 4)
     					imposto = pre_carga * 5/100;
  					   else 
  		     			imposto = 0;
     	// Mostra o imposto
  		System.out.println("Valor do imposto = "+imposto);
  		// Calcula o valor total
  		valor_total = pre_carga + imposto;
  		// Mostra o valor total
  		System.out.println("Valor total da carga = "+valor_total);
	}
}