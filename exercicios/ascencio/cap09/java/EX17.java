import java.util.*;
public class EX17
{
	public static void main(String args[])
		{ 
			Scanner dado = new Scanner(System.in);
			String frase,palavra,nova;
			System.out.println("DIGITE UMA FRASE");
			frase= dado.nextLine();
			frase = frase.toUpperCase();
			System.out.println("DIGITE A PALAVRA QUE SUBSTITUIRÁ ESCOLA");
			palavra= dado.nextLine();
			palavra = palavra.toUpperCase();
			nova = frase.replaceAll("ESCOLA",palavra);
			System.out.println("Nova frase = "+nova);
	}
}

