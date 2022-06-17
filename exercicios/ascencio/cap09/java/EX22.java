import java.util.*;
public class EX22
{
	public static void main(String args[])
		{ 
			Scanner dado = new Scanner(System.in);
			String frase;
			StringBuffer nova = new StringBuffer();
			StringBuffer meio = new StringBuffer();
			StringBuffer senha = new StringBuffer();
			String texto = new String();
			char letra;
			int tam,i,j,num,k;
			System.out.println("Digite um nome: ");
			frase = dado.nextLine();
			tam=frase.length();
			frase = frase.toUpperCase();
			letra = frase.charAt(0);
			nova.append(letra);
			j=1;
			for(i=1;i<tam;i++)
			{
		 		if (frase.charAt(i) == ' ')
		 		{
				 nova.append(frase.charAt(i+1));
				 j=j+1;
		 		}
			}
			texto=nova.toString();
			texto = texto.toLowerCase();
			meio.append(texto);
			k=j;
			for(i=0;i<k;i++)
			{
		 		nova.append(meio.charAt(i));
		 		j=j+1;
			}
			for(i=0;i<j;i++)
			{
 				num=((int)nova.charAt(i));
 				senha.append(String.valueOf(num));
 			}
			System.out.println("Login = "+nova);
			System.out.println("Senha = "+senha);
	}
}

