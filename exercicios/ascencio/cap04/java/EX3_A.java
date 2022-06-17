import java.util.*;

public class EX3_A
{
	public static void main (String args[])
	{
		float num1, num2;
		Scanner entrada;
		//Instancia o objeto da classe Scanner
		entrada = new Scanner(System.in);
		//Mostra mensagem solicitando o primeiro número
		System.out.print("Digite o primeiro número: ");
		//Recebe o valor do primeiro número
		num1 = entrada.nextFloat();		
		//Mostra mensagem solicitando o segundo número
		System.out.print("Digite o segundo número: ");
		//Recebe o valor do segundo número
		num2 = entrada.nextFloat();		
		//Determina e mostra o maior número
		if (num1 > num2)
   		System.out.println("O maior número é: " + num1);
		if (num2 > num1)
   		System.out.println("O maior número é: " + num2);
   		if (num1 == num2)
   		System.out.println("Os números são iguais");
   	}
}