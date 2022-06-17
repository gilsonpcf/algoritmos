import java.util.*;
public class EX2
{
	public static void main(String args[])
	{
		Scanner dado = new Scanner(System.in);
		String frase;
		int tam,i,qtde,num;
		qtde=0;	
		System.out.println("Digite uma frase");
		frase=dado.nextLine();
		tam=frase.length();
		for (i=0;i<tam;i++)
		{
 			num=((int)frase.charAt(i));
 			if ((num >= 65 && num <= 90) || (num >= 97 && num <= 122))
    		{
    			// é uma letra, maiúscula ou minúscula
    			if (num != 65 && num != 69
					&& num != 73 && num != 79
					&& num != 85 && num != 97
					&& num != 101 && num != 105
					&& num != 111 && num != 117)
					{
	 					qtde = qtde + 1;
					}
   			 }
		}
		System.out.println("Quantidade de consoantes = "+qtde);
	}
}