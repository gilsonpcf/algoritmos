import java.util.*;

public class EX4
{
	public static void main(String args[])
	{
	 	Scanner dado = new Scanner(System.in);
	 	String frase = new String();
	 	String letras =  new String();
  		int rep[] = new int[26];
  		int tam1, tam2, i, j=0, cont;
  		for (i=0;i<26;i++)
      		rep[i] = 0;
  		System.out.println("Digite uma frase ");
  		frase=dado.nextLine();
  		tam1 = frase.length();
  		for (i=0;i<tam1;i++)
    	{ 
    		if (frase.charAt(i) != ' ')
	 		{ 
	 		  j=0;	
	 		  while (j<letras.length() && letras.charAt(j) != frase.charAt(i))
	 		  {
	 		  	j++;
	 		  }	
	 		  if (j < letras.length() && letras.charAt(j) == frase.charAt(i))
	 		  {
	 		  	rep[j] = rep[j]+1;
	      	  }	
	   		  else
	     		{ 
	     			rep[j] = 1;
	     			letras = letras.concat(frase.substring(i,i+1));
	       		}
		  }	
	 	}
  tam2 = letras.length();
  cont = 0;
  for (i=0;i<tam2;i++)
      { if (rep[i] > 1)
	  {
	   System.out.println("A letra " +letras.charAt(i) +" apareceu " +rep[i]+" vezes");
	   cont = 1;
	  }
      }
  if (cont == 0)
    System.out.println("Nenhuma letra se repete");
  }
}  
