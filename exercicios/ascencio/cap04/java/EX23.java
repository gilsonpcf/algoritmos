import java.util.*;
import java.text.*;

public class EX23
{
	public static void main (String args[])
	{
		
  		double sal_min, nht, coeficiente=0, sal_bruto, imposto, grat, auxilio, sal_liq;
  		char turno, categoria;
		Scanner entrada;
		//Instancia o objeto da classe Scanner
		entrada = new Scanner(System.in);
		DecimalFormat casas;
       	casas = new DecimalFormat ("0.00"); 
		// Mostra mensagem antes da leitura do salário mínimo
  		System.out.println("Digite o valor do salário mínimo");
		// Recebe o salário mínimo
		sal_min = entrada.nextDouble(); 		
  		// Mostra mensagem antes da leitura do turno
  		System.out.println("Digite o turno de trabalho (M, V ou N) ");
  		// Recebe o turno
		turno = entrada.next().charAt(0);
  		// Mostra mensagem antes da leitura da categoria
  		System.out.println("Digite a categoria do trabalhador (O ou G) ");
  		// Recebe a categoria
		categoria = entrada.next().charAt(0);
  		// Mostra mensagem antes da leitura do número de horas trabalhadas
  		System.out.println("Digite o número de horas trabalhadas");
  		// Recebe o número de horas trabalhadas
		nht = entrada.nextDouble();
  		// Calcula o coeficiente do salário
  		if (turno == 'M')
     	  coeficiente = sal_min * 10/100;
  		if (turno == 'V')
     	  coeficiente = sal_min * 15/100;
  		if (turno == 'N')
     	  coeficiente = sal_min * 12/100;
     	// Mostra o coeficiente do salário  
  		System.out.println("Valor do Coeficiente = " +casas.format(coeficiente));
  		// Calcula o salário bruto
  		sal_bruto = nht * coeficiente;
  		// Mostra o salário bruto
  		System.out.println("Valor do salário bruto = " +casas.format(sal_bruto));
		// Calcula o imposto  
  		if (categoria == 'O')
     	{ 
     		if (sal_bruto >= 300)
	  		  imposto = sal_bruto * 5/100;
       		else
	  		  imposto = sal_bruto * 3/100;
     	}
  		else
     	{ 
     		if (sal_bruto >= 400)
	  		  imposto = sal_bruto * 6/100;
       		else
	  		  imposto = sal_bruto * 4/100;
     	}
     	// Mostra o valor do imposto
  		System.out.println("Valor do imposto = "+casas.format(imposto));
  		// Calcula a gratificação
  		if (turno == 'N' && nht > 80)
     	  grat = 50;
  		else
     	  grat = 30;
     	// Mostra a gratificação  
  		System.out.println("Gratificação = " +casas.format(grat));
  		// Calcula o auxílio alimentação
  		if (categoria == 'O' || coeficiente <= 25)
     	  auxilio = sal_bruto * 1/3;
  		else
     	  auxilio = sal_bruto * 1/2;
  		// Mostra o auxílio alimentação
  		System.out.println("Valor do auxílio alimentação = " +casas.format(auxilio));
  		// Calcula o salário líquido
  		sal_liq = sal_bruto - imposto + grat + auxilio;
  		// Mostra o salário líquido
  		System.out.println("Valor do salário líquido = " + casas.format(sal_liq));
  		// Mostra a classificação
  		if (sal_liq < 350)
     	  System.out.println("Mal Remunerado");
  		if (sal_liq >= 350 && sal_liq <= 600)
     	  System.out.println("Normal");
  		if (sal_liq > 600)
     	  System.out.println("Bem Remunerado");
  	}
}