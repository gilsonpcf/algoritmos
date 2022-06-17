import java.util.*;

public class EX6_A
{
	public static void main (String args[])
	{
		int num, resto;
		Scanner entrada;
		//Instancia o objeto da classe Scanner
		entrada = new Scanner(System.in);
		//Mostra mensagem solicitando um número
		System.out.print("Digite um número: ");
		num = entrada.nextInt();		
		//Determina o resto da divisão do número por 2
		resto = num % 2;
		//Se resto igual a zero então o número é par, caso contrário, é ímpar
		if (resto == 0)
   		System.out.println("O número é par");
		if (resto != 0)
   		System.out.println("O número é ímpar");
   	}
}