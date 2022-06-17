import java.util.*;

public class EX5_B
{
	public static void main (String args[])
	{
		int num1, num2, num3, num4;
		Scanner entrada;
		//Instancia o objeto da classe Scanner
		entrada = new Scanner(System.in);
		//Mostra mensagem solicitando três números em ordem crescente
		System.out.println("Digite três números em ordem crescente: ");
		//Recebe os três números
		num1 = entrada.nextInt();		
		num2 = entrada.nextInt();		
		num3 = entrada.nextInt();		
		//Mostra mensagem solicitando um quarto número em ordem aleatória
		System.out.println("Digite um número (fora de ordem): ");
		//Recebe valor do quarto número
		num4 = entrada.nextInt();		
		//Determina e mostra a ordem decrescente dos quatro números digitados
		if (num4 > num3)
   		 System.out.println("A ordem decrescente dos números é: "+num4+" - "+num3+" - "+num2+" - "+num1);
		else if (num4 > num2 && num4<num3)
   			  System.out.println("A ordem decrescente dos números é: "+num3+" - "+num4+" - "+num2+" - "+num1);
			 else if (num4 > num1 && num4 < num2)
   				   System.out.println("A ordem decrescente dos números é: "+num3+" - "+num2+" - "+num4+" - "+num1);
				  else 
				   System.out.println("A ordem decrescente dos números é: "+num3+" - "+num2+" - "+num1+" - "+num4);
   	}
}