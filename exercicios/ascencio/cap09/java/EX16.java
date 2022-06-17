import java.util.*;
public class EX16
{
	public static void main(String args[])
		{ 
			Scanner dado = new Scanner(System.in);
			String PALAVRA;
			int TAM, I, J, ACHOU;
			System.out.println("DIGITE A PALAVRA: ");
			PALAVRA= dado.nextLine();
			char PALAVRA1[] = PALAVRA.toCharArray();
			TAM=PALAVRA.length();
			J=TAM-1;
			ACHOU=0;
			for (I=0;I<TAM;I++)
			{
		 	if (PALAVRA1[I] != PALAVRA1[J])
			 ACHOU=1;
		 	 J=J-1;
			}
			if (ACHOU == 0)
			System.out.println(PALAVRA+" É PALíNDROME");
			else
			System.out.println(PALAVRA+" NÃO É PALíNDROME");
	}
}

