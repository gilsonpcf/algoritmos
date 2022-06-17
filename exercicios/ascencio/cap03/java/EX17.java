import java.util.*;

public class EX17
{
	public static void main (String args[])
	{
		double salario, cheque1, cheque2, cpmf1, cpmf2, saldo;
		Scanner entrada;
		// Instancia o objeto da classe Scanner para receber as entradas
	    entrada = new Scanner(System.in);
		// Mostra mensagem antes da leitura do valor do sal�rio
		System.out.print("Digite o sal�rio recebido: ");
		// Recebe o valor do sal�rio
		salario = entrada.nextDouble();
		// Mostra mensagem antes da leitura do valor do 1� cheque
		System.out.print("Digite o valor do 1� cheque: ");
		// Recebe o valor do 1� cheque emitido
		cheque1 = entrada.nextDouble();
		// Mostra mensagem antes da leitura do valor do 2� cheque
		System.out.print("Digite o valor do 2� cheque: ");
		// Recebe o valor do 2� cheque emitido
		cheque2 = entrada.nextDouble();
		// Calcula CPMF referente ao 1� cheque
		cpmf1 = cheque1 * 0.38 / 100;
		// Calcula CPMF referente ao 2� cheque
		cpmf2 = cheque2 * 0.38 / 100;
		// Calcula o saldo
		saldo = salario - cheque1 - cheque2 - cpmf1 - cpmf2;
		// Mostra o saldo
		System.out.println("O valor do saldo �: " + saldo);
	}
}