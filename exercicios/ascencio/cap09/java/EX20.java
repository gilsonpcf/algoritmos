import java.util.*;
public class EX20
{
	public static void main(String args[])
		{ 
			Scanner dado = new Scanner(System.in);
			String frase;
			StringBuffer nova = new StringBuffer();
			char letra, letra2;
  			int tam, i, achou, cont, pos1=0, pos2=0;
  			System.out.println("Digite um nome completo");
  			frase= dado.nextLine();
  			tam = frase.length();
  			achou = 0;
  			i = 0;
  			while (achou == 0)
    			{ 
    				letra = frase.charAt(i);
      				if (letra != ' ')
      					nova.append(letra);
	 				else
	 					{ 
	 					nova.append(letra);	
	 					achou = 1;
	   					pos1=i;
	 					}
      				i++;
    			}
			achou = 0;
  			i = tam-1;
  			while (achou == 0)
    			{ 
    				letra = frase.charAt(i);
      				if (letra == ' ')
	 					{ 
	 						pos2 = i;
	   						achou = 1;
	 					}
      				else
	 					i--;
    			}
  			cont=pos1+1;
  			letra2=frase.charAt(cont);
  			for (i=pos1+1;i<=pos2;i++)
    			{ 
    				letra = frase.charAt(i);
      				if (letra == ' ')
	 					{ 
	 						nova.append(letra2);
	 						nova.append('.');
	   						nova.append(' ');
	   						letra2=frase.charAt(i+1);
	 					}
    			}
  			for (i=pos2+1;i<tam;i++)
      			{ 
      				nova.append(frase.charAt(i));
      			}
  			System.out.println(nova);
	}
}

