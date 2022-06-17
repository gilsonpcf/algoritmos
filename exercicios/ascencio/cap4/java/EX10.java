import java.util.*;

public class EX10
{
	public static void main (String args[])
	{
		int d1,m1,a1,d2,m2,a2;
		Scanner entrada;
		//Instancia o objeto da classe Scanner
		entrada = new Scanner(System.in);  
		//Mostra as mensagens solicitando o dia, o mês e o ano da primeira data
 		System.out.println("Digite a primeira data");
 		System.out.print("Dia (dd): ");
 		//Recebe o valor do dia
 		d1 = entrada.nextInt();		
 		System.out.print("Mês (mm): ");
  		//Recebe o valor do mês
 		m1 = entrada.nextInt();		
 		System.out.print("Ano (aaaa): ");
  		//Recebe o valor do ano
 		a1 = entrada.nextInt();		
 		//Mostra as mensagens solicitando o dia, o mês e o ano da segunda data
 		System.out.println("Digite a segunda data");
 		System.out.print("Dia (dd): ");
 		//Recebe o valor do dia
 		d2 = entrada.nextInt();		
 		System.out.print("Mês (mm): ");
  		//Recebe o valor do mês
 		m2 = entrada.nextInt();		
 		System.out.print("Ano (aaaa): ");
  		//Recebe o valor do ano
 		a2 = entrada.nextInt();		
 		//Determina e mostra qual a maior data digitada
 		if (a1>a2)
    	System.out.println("A maior data é: " + d1 + "/" + m1 + "/" + a1);
 		else if (a2>a1)
      		 System.out.println("A maior data é: " + d2 + "/" + m2 + "/" + a2);
   			 else if (m1>m2)
				  System.out.println("A maior data é: " + d1 + "/" + m1 + "/" + a1);
     			  else if (m2>m1)
	  				   System.out.println("A maior data é: " + d2 + "/" + m2 + "/" + a2);
       				   else if (d1>d2)
	    				    System.out.println("A maior data é: " + d1 + "/" + m1 + "/" + a1);
	 						else if (d2>d1)
	      						 System.out.println("A maior data é: " + d2 + "/" + m2 + "/" + a2);
	   							 else 
	   							  System.out.println("As datas são iguais !");
   	}
}