import java.util.*;

public class EX17
{
	public static void main (String args[])
	{
		double a, b, c, delta, x1, x2;
		Scanner entrada;
		//Instancia o objeto da classe Scanner
		entrada = new Scanner(System.in);  
		//Mostra mensagem solicitando o valor de a
  		System.out.print("Digite o valor de a: ");
  		//Recebe o valor de a
  		a = entrada.nextDouble();		
  		//Mostra mensagem solicitando o valor de b
  		System.out.print("Digite o valor de b: ");
  		//Recebe o valor de b
  		b = entrada.nextDouble();		
  		//Mostra mensagem solicitando o valor de c
  		System.out.println("Digite o valor de c: ");
  		//Recebe o valor de c	
  		c = entrada.nextDouble();		
  		if (a == 0)
     	 System.out.println("Estes valores não formam uma equação de segundo grau ");
  		else
     		{ 
     			delta = (b * b) - ( 4 * a * c);
       			if (delta < 0)
	  			 System.out.println("Não existe raiz real ");
       			if (delta == 0)
	  			 { 
	  			 	System.out.println("Existe uma raiz real");
	    			x1 = (- b) / (2 * a);
	    			System.out.println("Raiz = "+x1);
	  			 }
       			if (delta > 0)
	  			 { 
	  			 	System.out.println("Existem duas raízes reais");
	    			x1 = (- b + Math.sqrt(delta))/(2 * a);
	    			x2 = (- b - Math.sqrt(delta))/( 2 * a);
	    			System.out.println("Primeira raiz = " + x1);
	    			System.out.println("Segunda raiz = " + x2);
	  			 }
    		}
	}
}