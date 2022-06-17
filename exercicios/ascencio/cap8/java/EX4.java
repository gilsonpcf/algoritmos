import java.util.Scanner;
public class EX4
{
  public static void main(String args[])
	{ Scanner entrada = new Scanner(System.in);
	  int seg;
	  System.out.print("Digite o valor em segundos: ");
	  seg = entrada.nextInt();
	  transformacao(seg);
	}

  public static void transformacao(int segundos)
	{ int h, m, s, r;
	  h = segundos / 3600;
	  r = segundos % 3600;
	  m = r / 60;
	  s = r % 60;
	  System.out.println("\n" + segundos + " segundo(s) equivale(m) a " + h + " hora(s)," + m + " minuto(s) e " + s + " segundo(s)");
	}
}	

