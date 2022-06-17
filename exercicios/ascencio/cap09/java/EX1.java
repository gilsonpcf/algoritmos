import java.util.*;
public class EX1
{
	public static void main(String args[])
	{
		String frase;
		int tam,i,qtde;
		qtde=0;
		Scanner entrada = new Scanner(System.in);
		System.out.println("Digite uma frase");
		frase=entrada.nextLine();
		tam=frase.length();
		for (i=0;i<tam;i++)
		{
		 if (frase.charAt(i) == 'a' || frase.charAt(i) == 'A'
    		|| frase.charAt(i) == 'e' || frase.charAt(i) == 'E'
    		|| frase.charAt(i) == 'i' || frase.charAt(i) == 'I'
    		|| frase.charAt(i) == 'o' || frase.charAt(i) == 'O'
    		|| frase.charAt(i) == 'u' || frase.charAt(i) == 'U')
    		{
      		qtde = qtde + 1;
    		}
		}
System.out.println("Quantidade de vogais = "+qtde);
}
}