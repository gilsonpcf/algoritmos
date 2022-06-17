import java.util.*;
public class EX6
{
	public static void main(String args[])
		{ 
			Scanner entrada = new Scanner(System.in);
			String frase1, frase2;
			String nova_frase = new String();
			char letra;
  			int tam1, tam2, i, j, cont;
  			System.out.println("Digite a primeira frase ");
  			frase1=entrada.nextLine();
  			char f1[]=frase1.toCharArray();
  			System.out.println("Digite a segunda frase ");
  			frase2=entrada.nextLine();
  			char f2[]=frase2.toCharArray();
  			tam1 = frase1.length();
  			tam2 = frase2.length();
  			i = 0;
  			j = 0;
  			cont = 0;
  			while ((i<tam1) || (j<tam2))
    		{ 
    			if (i<tam1)
	 				{ 
	 					letra = f1[i];
	   					while ((letra != ' ') && (i < tam1))
	     					{ 
	     						nova_frase = nova_frase.concat(String.valueOf(letra));
	       						cont++;
	       						i++;
	       						if (i < tam1)
	       						letra = f1[i];
	     					}
	   					nova_frase = nova_frase.concat(" ");
	   					cont++;
	   					i++;
	 				}
      			if (j<tam2)
	 				{ 
	 					letra = f2[j];
	   					while ((letra != ' ') && (j < tam2))
	     					{ 
	     						nova_frase = nova_frase.concat(String.valueOf(letra));
	       						cont++;
	       						j++;
	       						if (j < tam2)
	       						letra = f2[j];
	     					}
	     				nova_frase = nova_frase.concat(" ");	
						cont++;
	   					j++;
	 				}
    		}
  	System.out.println(nova_frase);
	}
}	
