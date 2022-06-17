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
		// Mostra mensagem antes da leitura do sal�rio m�nimo
  		System.out.println("Digite o valor do sal�rio m�nimo");
		// Recebe o sal�rio m�nimo
		sal_min = entrada.nextDouble(); 		
  		// Mostra mensagem antes da leitura do turno
  		System.out.println("Digite o turno de trabalho (M, V ou N) ");
  		// Recebe o turno
		turno = entrada.next().charAt(0);
  		// Mostra mensagem antes da leitura da categoria
  		System.out.println("Digite a categoria do trabalhador (O ou G) ");
  		// Recebe a categoria
		categoria = entrada.next().charAt(0);
  		// Mostra mensagem antes da leitura do n�mero de horas trabalhadas
  		System.out.println("Digite o n�mero de horas trabalhadas");
  		// Recebe o n�mero de horas trabalhadas
		nht = entrada.nextDouble();
  		// Calcula o coeficiente do sal�rio
  		if (turno == 'M')
     	  coeficiente = sal_min * 10/100;
  		if (turno == 'V')
     	  coeficiente = sal_min * 15/100;
  		if (turno == 'N')
     	  coeficiente = sal_min * 12/100;
     	// Mostra o coeficiente do sal�rio  
  		System.out.println("Valor do Coeficiente = " +casas.format(coeficiente));
  		// Calcula o sal�rio bruto
  		sal_bruto = nht * coeficiente;
  		// Mostra o sal�rio bruto
  		System.out.println("Valor do sal�rio bruto = " +casas.format(sal_bruto));
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
  		// Calcula a gratifica��o
  		if (turno == 'N' && nht > 80)
     	  grat = 50;
  		else
     	  grat = 30;
     	// Mostra a gratifica��o  
  		System.out.println("Gratifica��o = " +casas.format(grat));
  		// Calcula o aux�lio alimenta��o
  		if (categoria == 'O' || coeficiente <= 25)
     	  auxilio = sal_bruto * 1/3;
  		else
     	  auxilio = sal_bruto * 1/2;
  		// Mostra o aux�lio alimenta��o
  		System.out.println("Valor do aux�lio alimenta��o = " +casas.format(auxilio));
  		// Calcula o sal�rio l�quido
  		sal_liq = sal_bruto - imposto + grat + auxilio;
  		// Mostra o sal�rio l�quido
  		System.out.println("Valor do sal�rio l�quido = " + casas.format(sal_liq));
  		// Mostra a classifica��o
  		if (sal_liq < 350)
     	  System.out.println("Mal Remunerado");
  		if (sal_liq >= 350 && sal_liq <= 600)
     	  System.out.println("Normal");
  		if (sal_liq > 600)
     	  System.out.println("Bem Remunerado");
  	}
}