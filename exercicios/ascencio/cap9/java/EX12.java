import java.util.*;
public class EX12
{
	public static void main(String args[])
		{ 
			Scanner dado = new Scanner(System.in);
			StringBuffer novafrase = new StringBuffer();
			String frase;
			System.out.println("Digite uma frase");
  			frase=dado.nextLine();
  			novafrase.append(frase);
  			novafrase.reverse();
  			System.out.println("Nova frase = "+novafrase);		
		}
}
