import java.util.*;

public class EX3
{
	public static void main(String args[])
	{
		Scanner dado = new Scanner(System.in);
		String frase;
		int tam,i,qtde;
		qtde=0;	
		System.out.println("Digite uma frase");
		frase=dado.nextLine();
		tam=frase.length();
		for (i=0;i<tam;i++)
		{
 			if (frase.charAt(i)== ' ')
    		{
    			qtde = qtde + 1;
			}
		}
		System.out.println("Quantidade de palavras = "+(qtde+1));
	}
}