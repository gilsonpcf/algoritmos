import java.util.*;

public class EX1_B
{
	public static void main (String args[])
	{
		float nota_trab, aval_sem, exame, media;
		Scanner entrada;
		//Instancia o objeto da classe Scanner
		entrada = new Scanner(System.in);
		//Mostra mensagem solicitando nota do trabalho
		System.out.print("Digite a nota do trabalho em laboratório: ");
		//Recebe o valor da nota do trabalho
		nota_trab = entrada.nextFloat();		
		//Mostra mensagem solicitando nota da avaliação semestral
		System.out.print("Digite a nota da avaliação semestral: ");
		//Recebe o valor da avaliação semestral
		aval_sem = entrada.nextFloat();
		//Mostra mensagem solicitando nota do exame final
		System.out.print("Digite a nota do exame final: ");
		//Recebe o valor da nota do exame
		exame = entrada.nextFloat();
		//Calcula a média ponderada
		media = (nota_trab * 2 + aval_sem * 3 + exame * 5) / 10;
		//Mostra resultado da média
		System.out.println("Média ponderada: " + media);
		//Mostra o conceito obtido com a média alcançada
		if (media >=8 && media <=10)
   		  System.out.println("Obteve conceito A");
		else if (media >=7)
     		   System.out.println("Obteve conceito B");
  			 else if (media >= 6)
				    System.out.println("Obteve conceito C");
     			  else if (media >= 5)
	   					System.out.println("Obteve conceito D");
					   else 
					    System.out.println("Obteve conceito E");
	}
}