import java.util.*;
public class EX13
{
	public static void main(String args[])
		{ 
			Scanner dado = new Scanner(System.in);
			String frasedigitada;
			String frase[];
			StringBuffer nova = new StringBuffer();
			
  			int i;
  			
  			System.out.println("Digite uma frase");
  			frasedigitada=dado.nextLine();
  			frase = frasedigitada.split(" ");   
  			StringBuffer texto[] = new StringBuffer[frase.length];	
   			for(i=0;i<frase.length;i++)
			{
				texto[i] = new StringBuffer();
				
				texto[i].append(frase[i]);
				nova.append(texto[i].reverse()).append(" ");
			}
		System.out.println(nova);		
	}
}
