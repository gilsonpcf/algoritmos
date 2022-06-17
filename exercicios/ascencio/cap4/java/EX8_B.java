import java.util.*;

public class EX8_B
{
	public static void main (String args[])
	{
		double num1, num2, soma, raiz;
 		int op;
		Scanner entrada;
		//Instancia o objeto da classe Scanner
		entrada = new Scanner(System.in);
		//Mostra um menu de opções
 		System.out.println("1- Somar dois números");
 		System.out.println("2- Raiz quadrada de um número");
 		//Mostra mensagem solicitando a opção do usuário
 		System.out.print("Digite sua opção: ");
 		//Recebe a opção do usuário
 		op = entrada.nextInt();		
 		//Se a opção igual a 1, soma dois números
 		if (op == 1)
    	{
    		System.out.print("Digite um valor para o primeiro número: ");
    		num1 = entrada.nextDouble();		
		    System.out.print("Digite um valor para o segundo número: ");
		    num2 = entrada.nextDouble();		
		    soma = num1 + num2;
		    System.out.println("A soma de " + num1 + " e " + num2 + " é " + soma);
    	}
 		//Se a opção igual a 2, extrai a raiz quadrada de um número
 		else if (op == 2)
		    	{
			      System.out.print("Digite um número: ");
			      num1 = entrada.nextDouble();		
			      raiz = Math.sqrt(num1);
			      System.out.println("A raiz quadrada de " + num1 + " é " + raiz);
		   		}
		 	  //Se for digitada uma opção inválida mostra mensagem de alerta
 			  else System.out.println("Opção inválida !");
   	}
}