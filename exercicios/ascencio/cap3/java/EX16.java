import java.util.*;

public class EX16
{
	public static void main (String args[])
	{
		float horas_t, vlr_sal_min, vlr_hora_t, vlr_sal_bru, imp, vlr_sal_liq;
		Scanner entrada;
		// Instancia o objeto da classe Scanner para receber as entradas
	    entrada = new Scanner(System.in);
		// Mostra mensagem antes da leitura do total de horas trabalhadas
		System.out.print("Digite o total de horas trabalhadas: ");
		// Recebe total de horas trabalhadas
		horas_t = entrada.nextFloat();
		// Mostra mensagem antes da leitura do sal�rio m�nimo
		System.out.print("Digite o valor do sal�rio m�nimo: ");
		// Recebe valor do sal�rio m�nimo
		vlr_sal_min = entrada.nextFloat();
		// Calcula o valor de cada hora trabalhada
		vlr_hora_t =  vlr_sal_min / 2;
		// Calcula o sal�rio bruto
		vlr_sal_bru = vlr_hora_t * horas_t;
		// Calcula o imposto de 3% do sal�rio bruto
		imp = vlr_sal_bru * 3 / 100;
		// Calcula o sal�rio a receber
		vlr_sal_liq = vlr_sal_bru - imp;
		// Mostra o sal�rio a receber
		System.out.println("O sal�rio a receber �: " + vlr_sal_liq);
	}
}