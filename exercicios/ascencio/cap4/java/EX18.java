import java.util.*;

public class EX18
{
	public static void main (String args[])
	{
		float x, y, z;
		Scanner entrada;
		//Instancia o objeto da classe Scanner
		entrada = new Scanner(System.in);
		//Mostra mensagem solicitando o valor de x  
		System.out.print("Digite o valor de x: ");
		//Recebe o valor de x
		x = entrada.nextFloat();				
		//Mostra mensagem solicitando o valor de y
  		System.out.print("Digite o valor de y: ");
		//Recebe o valor de y
		y = entrada.nextFloat();				
		//Mostra mensagem solicitando o valor de z
  		System.out.print("Digite o valor de z: ");
  		//Recebe o valor de z
		z = entrada.nextFloat();				
		//Verifica se forma um triângulo e o classifica
		if (x < y + z && y < x + z && z < x + y)
     		{ 
     			if (x == y && y == z)
	  			 System.out.println("Triângulo Equilátero");
       			else if (x == y || x == z || y == z)
	     			  System.out.println("\nTriângulo Isósceles");
	  				 else if (x != y && x != z && y != z)
						   System.out.println("Triângulo Escaleno");
     		}
  		else System.out.println("Estas medidas não formam um triângulo");
	}
}