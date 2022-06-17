import java.util.*;

public class EXEMP4
{
 public static void main (String[] args)
 {
 	String nome;
 	int tamanho;
 	Scanner entrada;
 	System.out.println("Digite um nome");
 	entrada = new Scanner(System.in);
 	nome = entrada.nextLine();
 	System.out.println("Nome digitado = "+nome);
 	tamanho = nome.length();
 	System.out.println("Quantidade de caracteres da string digitada = "+tamanho);
  }
}
