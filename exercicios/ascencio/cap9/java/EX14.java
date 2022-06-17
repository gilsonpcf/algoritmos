import java.util.*;
public class EX14
{
	public static void main(String args[])
		{ 
			Scanner dado = new Scanner(System.in);
			String frasedigitada;
			int i;
  			System.out.println("Digite uma frase");
  			frasedigitada=dado.nextLine();
  			char nova[] = frasedigitada.toCharArray();
  			i=0;
  			while (i<nova.length)
			{
				if (i == 0)
				{
					nova[i] = Character.toUpperCase(nova[i]);
				}	
				if (nova[i] == ' ')
				{
					nova[i+1] = Character.toUpperCase(nova[i+1]);
				}
			i = i + 1;	
			}
		System.out.println("Nova frase");	
		for (i=0;i<nova.length;i++)	
			System.out.print(nova[i]);		
	}
}
