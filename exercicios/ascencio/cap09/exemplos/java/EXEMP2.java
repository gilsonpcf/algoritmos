import java.util.*;

public class EXEMP2
{
 public static void main (String[] args)
 {
 	String nome, nome1, nome2, nome3, nome4, nome5, nome6, nome7;
 	Scanner entrada;
 	System.out.println("Digite um nome");
 	entrada = new Scanner(System.in);
 	nome = entrada.nextLine();
 	System.out.println("Nome digitado = "+nome);
 	nome1 = nome + " Silva Souza"; 
	System.out.println("Concatenando o nome digitado com Silva Souza =  "+nome1); 		
	nome2 = " Silveira";	
 	nome3 = nome.concat(nome2);
 	System.out.println("Concatenando o nome digitado com Silveira =  "+nome3);
 	nome4 = "Carlito";
 	nome5 = "Heitor";
 	nome6 = nome4.concat(" ").concat(nome5).concat(" Machado");
 	System.out.println("Concatenando Carlito com espaço e com Heitor e com Machado = "+nome6);
  }
}
