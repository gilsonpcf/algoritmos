import java.util.*;
public class EX21
{
	public static void main(String args[])
		{ 
			Scanner dado = new Scanner(System.in);
			String frase;
			StringBuffer nova = new StringBuffer();
			char letra, letra2;
  			int tam, i, cont, achou, pos1=0, pos2=0;
  			System.out.println("Digite um nome completo ");
  			frase=dado.nextLine();
  			tam = frase.length();
  			achou = 0;
  			i = 0;
  			achou = 0;
  			i = tam-1;
  			while (achou == 0)
    			{ 
    				letra=frase.charAt(i);
      				if (letra == ' ')
	 					{ 
	 						pos1 = i;
							achou = 1;
	 					}
      				else
	 					i--;
    			}
  			cont=0;
  			for (i=pos1+1;i<tam;i++)
   				{ 
   					nova.append(frase.charAt(i));
     			}
  			nova.append(',').append(' ');
  			letra2=frase.charAt(0);
  			for (i=0;i<=pos1;i++)
    			{ 
    				letra = frase.charAt(i);
      				if (letra == ' ')
	 					{ 
	 						nova.append(letra2).append('.').append(' ');
	   				   	    letra2=frase.charAt(i+1);
	 					}
    			}
			System.out.println(nova);
	}
}

