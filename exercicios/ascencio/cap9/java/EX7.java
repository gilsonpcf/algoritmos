import java.util.*;
public class EX7
{
	public static void main(String args[])
		{ 
			Scanner dado = new Scanner(System.in);
			String frasedigitada, aux;
			String frase[];
			StringBuffer nova = new StringBuffer();
			
  			int i, j;
  			
  			System.out.println("Digite uma frase");
  			frasedigitada=dado.nextLine();
  			frase = frasedigitada.split(" ");   
  			for(i=0;i<frase.length;i++)
			{
				for(j=0;j<(frase.length-1);j++)
				{
				  if (frase[j].compareTo(frase[j+1]) > 0)
				  {
				  	aux = frase[j];
				  	frase[j] = frase[j+1];
				  	frase[j+1] = aux;
				  }
				}
			}
		for(j=0;j<frase.length;j++)
				{		
					nova.append(frase[j]).append(" ");
				}
		System.out.println(nova);		
	}
}
