import java.util.*;
public class EX8
{
	public static void main(String args[])
		{ 
			Scanner dado = new Scanner(System.in);
			String frasedigitada;
			String frase[];
						
  			int i, qtde=0;
  			
  			System.out.println("Digite uma frase");
  			frasedigitada=dado.nextLine();
  			frase = frasedigitada.split(" ");   
  			for(i=0;i<frase.length;i++)
			{
				if (frase[i].equalsIgnoreCase("AULA"))
				  {
				  	qtde = qtde + 1;
				  }
			}
			System.out.println("Quantidade de palavras AULA = "+qtde);		
		}
}
