import java.util.*;

public class EXEMP8
{
 public static void main (String[] args)
 {
 	String frase, nova1, nova2, nova3, nova4;
 	Scanner entrada;
 	int tamanho,i ;
 	
 	System.out.println("Digite uma frase");
 	entrada = new Scanner(System.in);
 	frase = entrada.nextLine();
 	nova1 = frase.replace("aula","tarefa");
 	System.out.println("Substituindo aula por tarefa = " + nova1); 
 	nova2 = frase.replaceAll("a","*");
 	System.out.println("Substituindo todos os caracteres a por * = "+nova2); 
 	nova3 = frase.replaceFirst("a","%");
 	System.out.println("Substituindo o primeiro caractere a por % = "+nova3); 
 	System.out.println("Retirando os espaços do inicio e do fim = "+frase.trim()); 	
 }
}
