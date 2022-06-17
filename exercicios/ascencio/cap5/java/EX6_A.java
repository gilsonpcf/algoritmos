import java.util.*;
public class EX6_A 
{
  public static void main (String args[])
  	{
  		Scanner dado = new Scanner(System.in);
  		int cont, codigo;
  		float nht, valor, sal_min, sal_inicial, aux, sal_final;
  		char turno, categoria;
  		sal_min = 450;
  		for (cont=1;cont<=10;cont++)
		{
			System.out.println("Digite o código do " +cont+"º funcionário: ");
			codigo = dado.nextInt();
			System.out.println("Digite o número de horas trabalhadas do "+cont+"º funcionário: ");
			nht = dado.nextInt();
			System.out.println("Digite o turno de trabalho do "+cont+"º funcionário (M, V ou N): ");
			turno = dado.next().charAt(0);
			while (turno !='M' && turno != 'V' && turno != 'N')
			{
			System.out.println("Turno inválido, digite novamente ");
			turno = dado.next().charAt(0);
			}
			System.out.println("Digite a categoria do "+cont+"º funcionário (G ou O): ");
			categoria = dado.next().charAt(0);
			while (categoria != 'G' && categoria != 'O')
			{ 
			System.out.println("Categoria inválida, digite novamente ");
			categoria = dado.next().charAt(0);
			}
			if (categoria == 'G')
		 	{
				if (turno == 'N')
				valor = sal_min * 18/100;
				else
			 	valor = sal_min * 15/100;
		 	}
			else
		 	{
				if (turno == 'N')
			 	valor = sal_min * 13/100;
				else
			 	valor = sal_min * 10/100;
		 	}
	 		sal_inicial = nht * valor;
	 		if (sal_inicial <= 300)
			aux = sal_inicial * 20/100;
	 		else if (sal_inicial < 600)
				 aux = sal_inicial * 15/100;
				 else
				 aux = sal_inicial * 5/100;
	 		sal_final = sal_inicial + aux;
	 		System.out.println("Código = " +codigo);
	 		System.out.println("Número de horas trabalhadas = "+nht);
	 		System.out.println("Valor do hora trabalhada = "+valor);
	 		System.out.println("Salário inicial = "+sal_inicial);
	 		System.out.println("Auxílio comida = "+aux);
	 		System.out.println("Salário Final = "+sal_final);
		}
  	}
}