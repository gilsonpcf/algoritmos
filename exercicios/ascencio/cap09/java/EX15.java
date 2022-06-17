import java.util.*;
public class EX15
{
	public static void main(String args[])
		{ 
			Scanner dado = new Scanner(System.in);
			String nomedigitado;
			char LOGIN[] = new char[20];
			int ACHOU, I, J, K, TAM, POSI=0, QTDE;
			System.out.println("Digite o nome");
			nomedigitado=dado.nextLine();
			nomedigitado.toLowerCase();
			char NOME[] = nomedigitado.toCharArray();
			TAM=NOME.length;
			LOGIN[0]=NOME[0];
			QTDE=0;
			for(I=0;I<TAM;I++)
			{
		 		if (NOME[I] == ' ')
		 			{
					QTDE=QTDE+1;
					POSI=I;
		 			}
			}
			if (QTDE == 1)
			{
				J=1;
				for (K=POSI+1;K<TAM;K++)
				{
					LOGIN[J]=NOME[K];
					J++;
				}
		 	}
			else
			{
				ACHOU=0;
				I=0;
				J=1;
				while (ACHOU == 0)
				 {
					if (NOME[I] == ' ')
						{
							 ACHOU=1;
							 POSI=I;
						}
				 I=I+1;
				 }
			LOGIN[J]=NOME[POSI+1];
			J++;
			ACHOU=0;
			I=TAM-1;
			while (ACHOU == 0)
			{
					if (NOME[I] == ' ')
					{
							 ACHOU=1;
							 POSI=I;
					}
				 I=I-1;
		 	}
		 for(I=POSI+1;I<TAM;I++)
		 {
			 LOGIN[J]=NOME[I];
			 J++;
		 }
	 }
System.out.println("Nome digitado");	 
for(I=0;I<NOME.length;I++)	 
System.out.print(NOME[I]);
System.out.println();
System.out.println("Login");	 
for(I=0;I<LOGIN.length;I++)	 
System.out.print(LOGIN[I]);
}
}

