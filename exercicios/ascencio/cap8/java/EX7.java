import java.util.Scanner;
public class EX7
{
  public static void main(String args[])
  { Scanner entrada = new Scanner(System.in);
	float nota1, nota2, nota3, m;
	char letra;
	System.out.print("Digite a 1a nota: ");
	nota1 = entrada.nextFloat();
	System.out.print("Digite a 2a nota: ");
	nota2 = entrada.nextFloat();
	System.out.print("Digite a 3a nota: ");
	nota3 = entrada.nextFloat();
	do
	  { System.out.print("Digite uma letra (A-Media aritmetica, P-Media ponderada) ");
	    letra = entrada.next().charAt(0);
	    letra = Character.toUpperCase(letra);
	  } while ((letra != 'A') && (letra != 'P'));
	m = calcula_media(nota1, nota2, nota3, letra);
	if (letra=='A')
	   System.out.println("\nMedia aritmetica = " + m);
	else
	   System.out.println("\nMedia ponderada = " + m);
  }

	public static float calcula_media(float n1, float n2, float n3, char l)
	{ float media;
	  if (l == 'A')
	     media = (n1+n2+n3)/3;
	  else
	     media = (n1*5+n2*3+n3*2)/(5+3+2);
	  return media;
	}
}