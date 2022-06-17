import java.util.*;

public class EXEMP1
{
 public static void main (String[] args)
 {
 	String nome, nome1, nome2, nome3, nome4;
 	Scanner entrada;
 	System.out.println("Digite um nome");
 	entrada = new Scanner(System.in);
 	nome = entrada.nextLine();
 	System.out.println("Nome digitado = "+nome);
 	nome1 = nome;
 	System.out.println("Nome copiado = "+nome1);
 	nome2 = "Maria da Costa";
 	System.out.println("Nome atribuído = "+nome2);
 	nome3 = nome2.substring(9);
 	System.out.println("Nome com caracteres do nome atribuído, a partir da posição 9 = "+nome3);
 	nome4 = nome2.substring(0,5);
 	System.out.println("nome com caracteres do nome atribuído, da posição 0 a 4 = "+nome4);
  }
}
