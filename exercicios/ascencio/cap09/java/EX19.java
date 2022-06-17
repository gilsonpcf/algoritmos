import java.util.*;
public class EX19
{
	public static void main(String args[])
		{ 
			Scanner dado = new Scanner(System.in);
			String frase;
			int i;
			System.out.println("Digite uma frase");
			frase = dado.nextLine();
			frase = frase.toUpperCase();
			frase = frase.replaceAll("JANEIRO","01");
			frase = frase.replaceAll("FEVEREIRO","02");
			frase = frase.replaceAll("MARÇO","03");
			frase = frase.replaceAll("ABRIL","04");
			frase = frase.replaceAll("MAIO","05");
			frase = frase.replaceAll("JUNHO","06");
			frase = frase.replaceAll("JULHO","07");
			frase = frase.replaceAll("AGOSTO","08");
			frase = frase.replaceAll("SETEMBRO","09");
			frase = frase.replaceAll("OUTUBRO","10");
			frase = frase.replaceAll("NOVEMBRO","11");
			frase = frase.replaceAll("DEZEMBRO","12");
			System.out.println("Nova frase = "+frase);
	}
}

