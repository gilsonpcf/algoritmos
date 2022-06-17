import java.util.*;

public class EX8_A
{
	public static void main (String args[])
	{
		double num1, num2, soma, raiz;
 		int op;
		Scanner entrada;
		//Instancia o objeto da classe Scanner
		entrada = new Scanner(System.in);
		//Mostra um menu de op��es
 		System.out.println("1- Somar dois n�meros");
 		System.out.println("2- Raiz quadrada de um n�mero");
 		//Mostra mensagem solicitando a op��o do usu�rio
 		System.out.print("Digite sua op��o: ");
 		//Recebe a op��o do usu�rio
 		op = entrada.nextInt();		
 		//Se a op��o igual a 1, soma dois n�meros
 		if (op == 1)
    	{
    		System.out.print("Digite um valor para o primeiro n�mero: ");
    		num1 = entrada.nextDouble();		
		    System.out.print("Digite um valor para o segundo n�mero: ");
			num2 = entrada.nextDouble();		
		    soma = num1 + num2;
		    System.out.println("A soma de " + num1 + " e " + num2 + " � " + soma);
    	}
 		//Se a op��o igual a 2, extrai a raiz quadrada de um n�mero
 		if (op == 2)
    	{
	      System.out.print("Digite um n�mero: ");
	      num1 = entrada.nextDouble();		
	      raiz = Math.sqrt(num1);
	      System.out.println("A raiz quadrada de " + num1 + " � " + raiz);
   		}
 		//Se for digitada uma op��o inv�lida mostra mensagem de alerta
 		if (op != 1 && op != 2)
    	System.out.println("Op��o inv�lida !");
   	}
}