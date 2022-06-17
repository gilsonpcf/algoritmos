import java.util.Scanner;
public class EX9
{ 
	public static void main(String args[])
	{ 
	  maior_menor();
	}
	public static void maior_menor()
	{ Scanner entrada = new Scanner(System.in);
	  int i, num, maior=0, menor=0;
	  for (i=1;i<=5;i++)
	    { System.out.print("Digite o " + i + "o numero: ");
	      num = entrada.nextInt();
	      if (i==1)
		     { maior = num;
		       menor = num;
		     }
	      else
		     { if (num > maior)
		          maior = num;
		       if (num < menor)
		          menor = num;
		     }
	    }
	  System.out.println("\nO maior numero digitado foi: " + maior);
	  System.out.println("\nO menor numero digitado foi: " + menor);
	}  
}
