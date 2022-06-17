import java.util.*;

public class EX11
{
	public static void main (String args[])
	{
		int hora_i, min_i, hora_f, min_f, hora_d, min_d;
		Scanner entrada;
		//Instancia o objeto da classe Scanner
		entrada = new Scanner(System.in);  
 		//Mostra mensagens solicitando hora e minuto iniciais
 		System.out.println("Digite o hor�rio inicial");
 		System.out.print("Hora: ");
		//Recebe hora inicial
		hora_i = entrada.nextInt();		
 		System.out.print("Minuto: ");
 		//Recebe minuto inicial
  		min_i = entrada.nextInt();		
 		//Mostra mensagens solicitando hora e minuto finais
 		System.out.println("Digite o hor�rio final");
 		System.out.print("Hora: ");
 		//Recebe hora final
 		hora_f = entrada.nextInt();		
 		System.out.print("Minuto: ");
 		//Recebe minuto final
 		min_f = entrada.nextInt();		
 		//Se o minuto inicial for maior que o minuto final deve-se fazer uma
 		// transforma��o nas vari�veis min_f e hora_f
 		// retira-se uma unidade da vari�vel hora_f e acrescenta esta unidade,
 		// convertida para 60 minutos � vari�vel min_f. 
 		// Exemplo: 7h e 30m transforma-se em 6h e 90m
 		if (min_i > min_f)
    	  { 
    		min_f = min_f + 60;
      		hora_f = hora_f - 1;
    	  }
  		// Se a hora inicial for maior que a hora final significa que o jogo acabou
  		// no dia seguinte. Sendo assim, acrescenta-se 24 horas (equivalente a um dia)
  		// � vari�vel hora_f
 		if (hora_i > hora_f)
    		hora_f = hora_f + 24;
 		// Ap�s as transforma��es necess�rias, o tempo decorrido � calculado sempre
 		// assim: tempo final - tempo inicial
 		min_d = min_f - min_i;
 		hora_d = hora_f - hora_i;
 		//Mostra a duara��o do jogo em horas e minutos
 		System.out.println("O jogo durou " + hora_d + " hora(s) e " + min_d + " minuto(s)");
    	}
}