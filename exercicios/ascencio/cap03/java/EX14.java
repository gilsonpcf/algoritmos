import java.util.*;

public class EX14
{
	public static void main (String args[])
	{
		int ano_atual, ano_nasc, id_atual, id_2050;
		Scanner entrada;
		// Instancia o objeto da classe Scanner para receber as entradas
	    entrada = new Scanner(System.in);		
	  	// Mostra mensagem antes da leitura do ano de nascimento
		System.out.print("Digite o ano de nascimento: ");
		// Recebe o ano de nascimento
		ano_nasc = entrada.nextInt();
  		// Mostra mensagem antes da leitura do ano atual
  		System.out.print("Digite o ano atual: ");
  		// Recebe o ano atual
  		ano_atual = entrada.nextInt();
  		// Calcula a idade atual
  		id_atual = ano_atual - ano_nasc;
  		// Calcula a idade em 2050
  		id_2050 = 2050 - ano_nasc;
  		// Mostra a idade atual
  		System.out.println("A idade atual é: "+id_atual);
  		// Mostra a idade em 2050
  		System.out.println("A idade em 2050 será: "+id_2050);
	}
}