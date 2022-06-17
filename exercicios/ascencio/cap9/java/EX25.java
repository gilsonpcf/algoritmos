import java.util.*;
public class EX25
{
	public static void main(String args[])
		{ 
			Scanner dado = new Scanner(System.in);
			String frase;
			int tam, i, qtde;
			System.out.println("Digite uma frase");
			frase=dado.nextLine();
			frase= frase.toUpperCase();
			char fim[] = frase.toCharArray();
			tam=frase.length();
			qtde=0;
			for (i=0;i<tam-1;i++)
			{
			 if (fim[i]=='R' && fim[i+1]==' ')
				qtde = qtde+1;
       		}
       		if (fim[tam-1] == 'R')
       			qtde = qtde + 1;
       		System.out.println("Quantidade de verbos = "+qtde);	
		}
}

