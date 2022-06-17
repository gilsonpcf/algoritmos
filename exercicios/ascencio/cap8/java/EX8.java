import java.util.Scanner;
public class EX8
{
	public static void main(String args[])
	{ Scanner entrada = new Scanner(System.in);
	  int hora_i, min_i, hora_f, min_f, minutos;
	  System.out.println("Inicio do jogo ==> ");
	  System.out.print("Hora: ");
	  hora_i = entrada.nextInt();
	  System.out.print("Minuto: ");	  
	  min_i = entrada.nextInt();
	  System.out.print("\n\nFim do jogo ==> ");
	  System.out.print("\nHora: ");
	  hora_f = entrada.nextInt();
	  System.out.print("Minuto: ");	  
	  min_f = entrada.nextInt();
	  minutos = calculo(hora_i, min_i, hora_f, min_f);
	  System.out.println("\n\nA duração do jogo foi de " + minutos + " minutos");
	}

	public static int calculo(int h_i, int m_i, int h_f, int m_f)
	{ int tot_h, tot_m, total;
	  if (m_f < m_i)
	     { m_f = m_f + 60;
	       h_f--;
	     }
	  if (h_f < h_i)
	     h_f = h_f + 24;
	  tot_h = h_f - h_i;
	  tot_m = m_f - m_i;
	  total = tot_h * 60 + tot_m;
	  return total;
	}
}	