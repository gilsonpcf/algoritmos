import java.util.*;

public class EX19
{
	public static void main (String args[])
	{
		float a_degrau, a_usuario, qtd_degraus;
		Scanner entrada;
		// Instancia o objeto da classe Scanner para receber as entradas
	    entrada = new Scanner(System.in);
		// Mostra mensagem antes da leitura da altura do degrau
		System.out.print("Digite a altura do degrau: ");
		// Recebe a altura do degrau
		a_degrau = entrada.nextFloat();
		// Mostra mensagem antes da leitura da altura desejada pelo usu�rio
		System.out.print("Digite a altura desejada pelo usu�rio: ");
		// Recebe a altura desejada pelo usu�rio
		a_usuario = entrada.nextFloat();
		// Calcula o total de degraus necess�rios
		qtd_degraus = a_usuario / a_degrau;
		// Mostra total calculado
		System.out.println("Total de degraus necess�rios: " + qtd_degraus);
	}
}