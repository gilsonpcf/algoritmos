import java.util.*;
public class EX9
{
	public static void main(String args[])
		{ 
			Scanner dado = new Scanner(System.in);
			String frasedigitada, palavra;
			String frase[];
			int i, qtde=0;
  			
  			System.out.println("Digite uma frase");
  			frasedigitada=dado.nextLine();
  			frase = frasedigitada.split(" ");   
  			System.out.println("Digite uma palavra");
  			palavra=dado.nextLine();
  			for(i=0;i<frase.length;i++)
			{
				if (frase[i].equalsIgnoreCase(palavra))
				  {
				  	qtde = qtde + 1;
				  }
			}
			System.out.println("A palavra "+palavra+" apareceu "+qtde+" vezes na frase");		
		}
}
