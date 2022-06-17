import java.util.*;

public class EX4_A
{
	public static void main (String args[])
	{
		int num1, num2, num3;
		Scanner entrada;
		//Instancia o objeto da classe Scanner
		entrada = new Scanner(System.in);
		//Mostra mensagem solicitando o primeiro número
		System.out.print("Digite o primeiro número: ");
		//Recebe o valor do primeiro número
		num1 = entrada.nextInt();		
		//Mostra mensagem solicitando o segundo número
		System.out.print("Digite o segundo número: ");
		//Recebe o valor do segundo número
		num2 = entrada.nextInt();		
		//Mostra mensagem solicitando o terceiro número
		System.out.print("Digite o terceiro número: ");
		//Recebe o valor do terceiro número
		num3 = entrada.nextInt();		
		//Determina e mostra a ordem crescente dos números digitados
		if (num1 < num2 && num1 < num3)
		 {
		   if (num2 < num3)
      		System.out.println("A ordem crescente dos números é: " + num1 + " - " + num2 + " - " + num3);
   		   if (num3 < num2)	
   			System.out.println("A ordem crescente dos números é: " + num1 + " - " + num3 + " - " + num2);
		 }   
		if (num2 < num1 && num2 < num3)
		 {
		   if (num1 < num3)
      		System.out.println("A ordem crescente dos números é: " + num2 + " - " + num1 + " - " + num3);
   		   if (num3 < num1)	
   			System.out.println("A ordem crescente dos números é: " + num2 + " - " + num3 + " - " + num1);
		 }   
		if (num3 < num1 && num3 < num2)
		 {
		   if (num1 < num2)
      		System.out.println("A ordem crescente dos números é: " + num3 + " - " + num1 + " - " + num2);
   		   if (num2 < num1)	
   			System.out.println("A ordem crescente dos números é: " + num3 + " - " + num2 + " - " + num1);
		 }   
   	}
}