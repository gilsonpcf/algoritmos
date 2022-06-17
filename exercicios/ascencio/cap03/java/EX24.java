import java.util.*;

public class EX24
{
	public static void main (String args[])
	{

 		double hora, conversao, m;
 		int h;
 		Scanner entrada;
 		// Instancia o objeto da classe Scanner para receber as entradas
	    entrada = new Scanner(System.in);
		// Mostra mensagem antes da leitura da hora e dos minutos
       	System.out.print("Digite a hora e os minutos, por exemplo, 4,30: ");
		// Recebe a hora (hora e minutos)
		hora = entrada.nextDouble();
		// Separa as horas na variável h e os minutos na variável m
		h = (int)hora;
		m = hora - h;
		// Calcula a conversão para minutos
		conversao = h * 60 + m * 100;
		conversao = Math.ceil(conversao);
		// Mostra a conversão
		System.out.println("Hora convertida para minutos: " + conversao);
	}
}