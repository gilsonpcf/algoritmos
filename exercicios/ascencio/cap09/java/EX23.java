import java.util.*;
public class EX23
{
	public static void main(String args[])
		{ 
			Scanner dado = new Scanner(System.in);
			String frase;
			StringBuffer crip = new StringBuffer();
			int tam, i, num;
			System.out.println("Digite uma frase ");
			frase=dado.nextLine();
			frase = frase.toUpperCase();
			tam=frase.length();
			char l[] = frase.toCharArray(); 
			for (i=0;i<tam;i++)
			{
		 		if (l[i] != ' ')
		 		 {
				 if (l[i] == 'X' || l[i] == 'Y' || l[i] == 'Z')
					{
					if (l[i] == 'X') l[i]='A';
					if (l[i] == 'Y') l[i]='B';
					if (l[i] == 'Z') l[i]='C';
					num=((int)l[i]);
					}
				 else
				 {
					num=((int)l[i]);
					num=num+3;
				 }
				 crip.append((char)num);
			}
			if (l[i] == ' ')
			{
			 crip.append(" ");
			}
}

System.out.println("Frase cripitografada");
System.out.println(crip);
	}
}

