import java.util.*;
public class EX24
{
	public static void main(String args[])
		{ 
			Scanner dado = new Scanner(System.in);
			String verbo, meio;
			int tam, i;
			System.out.println("Digite um verbo terminado em AR: ");
			verbo=dado.nextLine();
			verbo= verbo.toUpperCase();
			char fim[] = verbo.toCharArray();
			tam=verbo.length();
			if (fim[tam-1]!='R' || fim[tam-2]!='A')
			System.out.println("Verbo não terminado em AR");
			else
			{
	  			meio= verbo.substring(0,tam-2);
	  		    System.out.println("EU "+meio+"O");
	     		System.out.println("TU "+meio+"AS");
	     		System.out.println("ELE "+meio+"A");
	     		System.out.println("ELA "+meio+"A");
	     		System.out.println("NÓS "+meio+"AMOS");
	     		System.out.println("VÓS "+meio+"ÁIS");
	     		System.out.println("ELES "+meio+"AM");
	     		System.out.println("ELAS "+meio+"AM");
       		}
	}
}

