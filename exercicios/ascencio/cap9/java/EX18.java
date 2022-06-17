import java.util.*;
public class EX18
{
	public static void main(String args[])
		{ 
			Scanner dado = new Scanner(System.in);
			String frase;
			String nova = new String();
			int posi, i, tam;
			System.out.println("DIGITE UMA FRASE");
			frase= dado.nextLine();
			tam=frase.length();
			posi=0;
			for(i=0;i<tam;i++)
			{
		 		if (frase.charAt(i) == ' ')
		 			{
		 			nova = nova+frase.substring(posi,i+1)+frase.substring(posi,i+1);	
					posi=i+1;
					}
			}
			nova = nova+frase.substring(posi,tam)+' '+frase.substring(posi,tam);
						
			System.out.println("Nova frase = "+nova);
	}
}

