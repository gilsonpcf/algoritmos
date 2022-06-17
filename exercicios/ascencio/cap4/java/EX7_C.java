import java.util.*;

public class EX7_C
{
	public static void main (String args[])
	{
		int A,B,C,I;
		Scanner entrada;
		//Instancia o objeto da classe Scanner
		entrada = new Scanner(System.in);
		//Mostra mensagem solicitando um valor para A
 		System.out.print("Digite um valor para A: ");
 		//Recebe valor de A
 		A = entrada.nextInt();		
 		//Mostra mensagem solicitando um valor para B
 		System.out.print("Digite um valor para B: ");
 		//Recebe valor de B
 		B = entrada.nextInt();		
 		//Mostra mensagem solicitando um valor para C
 		System.out.print("Digite um valor para C: ");
 		//Recebe valor de C
 		C = entrada.nextInt();		
 		//Mostra mensagem solicitando um valor para I
 		System.out.print("Digite um valor para I (1, 2 ou 3): ");
		//Recebe valor de I
		I = entrada.nextInt();		
 		switch (I)
  		{   //Se I for igual a 1 determina e mostra a ordem crescente dos números
  			case 1:
  			{
  			if (A<B && A<C)
       		  {
       		  	if (B<C)
	  			 System.out.println("A ordem crescente dos números é: " + A + " - " + B + " - " + C);
       			else
	  			 System.out.println("A ordem crescente dos números é: " + A + " - " + C + " - " + B);
	  		  }	 
    		if (B<A && B<C)
			  {
			  	if (A<C)
	  			 System.out.println("A ordem crescente dos números é: " + B + " - " + A + " - " + C);
       			else
	  			 System.out.println("A ordem crescente dos números é: " + B + " - " + C + " - " + A);
	  		  }	 
    		if (C<A && C<B)
    		  {
    		    if (A<B)
	  			 System.out.println("A ordem crescente dos números é: " + C + " - " + A + " - " + B);
       			else
	  			 System.out.println("A ordem crescente dos números é: " + C + " - " + B + " - " + A);
  			  }
  			break;  
  	 		}		  
 		    //Se I for igual a 2 determina e mostra a ordem decrescente dos números
 			case 2:
 			{
	    	if (A>B && A>C)
       		  {
       		  	if (B>C)
	  			 System.out.println("A ordem decrescente dos números é: " + A + " - " + B + " - " + C);
       			else
	  			 System.out.println("A ordem decrescente dos números é: " + A + " - " + C + " - " + B);
	  		  }	 
	   		if (B>A && B>C)
			  {
			  	if (A>C)
	  			 System.out.println("A ordem decrescente dos números é: " + B + " - " + A + " - " + C);
	   			else
	  			 System.out.println("A ordem decrescente dos números é: " + B + " - " + C + " - " + A);
	  		  }	 
	   		if (C>A && C>B)
	   		  {
	   		    if (A>B)
	  			 System.out.println("A ordem decrescente dos números é: " + C + " - " + A + " - " + B);
	   			else
	 			 System.out.println("A ordem decrescente dos números é: " + C + " - " + B + " - " + A);
			  }
			  break;
		    }
		  	// Se I for igual a 3 mostra o maior número entre os demais
		  	case 3:
		  	{
			if (A>B && A>C)
			 System.out.println("A ordem desejada é: " + B + " - " + A + " - " + C);
			if (B>A && B>C)
			 System.out.println("A ordem desejada é: " + A + " - " + B + " - " + C);
			if (C>A && C>B)
			 System.out.println("A ordem desejada é: " + A + " - " + C + " - " + B);
			}
		}	
   	}
}