public class EXEMP6
{
 public static void main (String[] args)
 {
  	StringBuffer texto = new StringBuffer("A aula de inglês é legal");
 	StringBuffer nome = new StringBuffer("Maria e Costa");
 	System.out.println("Texto inicial");
 	System.out.println(texto);
 	texto.delete(6,16);
 	System.out.println("Texto final"); 
 	System.out.println(texto);	
	System.out.println("Nome inicial");
 	System.out.println(nome);
 	nome.deleteCharAt(6);
 	nome.deleteCharAt(6);
 	System.out.println("Nome final"); 
 	System.out.println(nome);	 		
 }
}
