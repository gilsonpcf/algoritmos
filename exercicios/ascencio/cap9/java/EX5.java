import java.util.*;
public class EX5
{
	public static void main (String args[])
	{
		Scanner dado = new Scanner(System.in);
		String frase = new String();
		char letra;
  		int i;
  		System.out.println("Digite uma frase");
  		frase = dado.nextLine();
  		frase = frase.toUpperCase();
  		char novafrase[] = frase.toCharArray();
  		for (i=0;i<frase.length();i++)
    	{
      		letra = novafrase[i];
      		if ((letra == 'A') || (letra == 'E') || (letra == 'I') || (letra == 'O') || (letra == 'U'))
	 			{ 
	 				novafrase[i] = '*';
	 			}
    	}
  	  System.out.println(novafrase);
	}
 }
