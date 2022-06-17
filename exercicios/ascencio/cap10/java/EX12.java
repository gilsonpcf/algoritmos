import java.util.Scanner;
public class EX12
{ public static void main(String args[])
  { Scanner entrada = new Scanner(System.in);
  
  	Tempo tempo;
    int min, seg, hora_total, min_total;
    tempo = new Tempo();
  
	do { System.out.print("\nDigite a hora inicial do jogo: ");
		 tempo.hora_ini = entrada.nextInt();
	   } while ((tempo.hora_ini > 23) || (tempo.hora_ini < 0));

	do { System.out.print("Digite o minuto inicial do jogo: ");
	     tempo.min_ini = entrada.nextInt();
	   } while ((tempo.min_ini > 59) || (tempo.min_ini < 0));

	do { System.out.print("Digite a hora final do jogo: ");
		 tempo.hora_fim = entrada.nextInt();
	    } while ((tempo.hora_fim > 23) || (tempo.hora_fim  < 0));

	do { System.out.print("Digite o minuto final do jogo: ");
	     tempo.min_fim = entrada.nextInt();
	   } while ((tempo.min_fim > 59) || (tempo.min_fim < 0));

	if (tempo.min_fim < tempo.min_ini)
		 { tempo.min_fim = tempo.min_fim + 60;
			 tempo.hora_fim = tempo.hora_fim - 1;
		 }

	if (tempo.hora_fim < tempo.hora_ini)
		 { tempo.hora_fim = tempo.hora_fim + 24;
		 }

	hora_total = tempo.hora_fim - tempo.hora_ini;
	min_total = tempo.min_fim - tempo.min_ini;
	
	System.out.print("\nA duracao do jogo foi de: " + hora_total + " hora(s) e " + min_total + " minuto(s)");
	min = hora_total * 60 + min_total;
	System.out.print("\nA duracao do jogo expressa somente em minutos foi de: " + min + " minuto(s)");
	seg = min * 60;
	System.out.print("\nA duracao do jogo expressa somente em segundos foi de: " + seg + " segundo(s)");
  }
	private static class Tempo
	{ public int hora_ini;
	  public int min_ini;
	  public int hora_fim;
	  public int min_fim;
	}  
}



