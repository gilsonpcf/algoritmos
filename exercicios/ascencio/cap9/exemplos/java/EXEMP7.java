import java.util.*;

public class EXEMP7
{
 public static void main (String[] args)
 {
 	String frase, nova;
 	StringBuffer texto = new StringBuffer();
 	char letra;
 	Scanner entrada;
 	System.out.println("Digite uma frase");
 	entrada = new Scanner(System.in);
 	frase = entrada.nextLine();
 	System.out.print("Digite a palavra a ser inserida na frase = ");
 	nova = entrada.nextLine();
 	texto.insert(0,frase);
 	texto.insert(7,nova);
 	texto.insert(7+nova.length()," ");
 	System.out.println("Nova frase = "+texto); 
 }
}
