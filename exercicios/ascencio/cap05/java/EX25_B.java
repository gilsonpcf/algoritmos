import java.util.*;
public class EX25_B
{
  public static void main (String args[])
  	{
  		Scanner dado = new Scanner(System.in);
  		float preco, imp, transp, seguro, pfinal, total_imp, origem;
  		char meio_t, carga;
  		transp = 0;
  		total_imp = 0;
  		do
  		{
  		System.out.println("Digite o preço unitário ");
  		preco = dado.nextFloat();
  		if (preco > 0)
    	{ 	
    		System.out.println("Digite a origem do produto (1-EUA, 2-México, 3-outros) ");
      		origem = dado.nextFloat();
      		System.out.println("Digite o meio de transporte utilizado (T-Terrestre, F-Fluvial, A-Aéreo) ");
      		meio_t = dado.next().charAt(0);
      		System.out.println("Trata-se de uma carga perigosa (S ou N) ?");
      		carga = dado.next().charAt(0);
      		if (preco <= 100)
				imp = preco * 5 / 100;
			else
				imp = preco * 10 / 100;
			if (carga == 'S')
				{ if (origem == 1)
						transp = 50;
					if (origem == 2)
						transp = 35;
					if (origem == 3)
						transp = 24;
				}
			if (carga == 'N')
				{ if (origem == 1)
						transp = 12;
					if (origem == 2)
						transp = 35;
					if (origem == 3)
						transp = 60;
				}
			 if (origem == 2 || meio_t == 'A')
				seguro = preco/2;
			 else
				seguro = 0;
			 pfinal = preco +imp + transp + seguro;
			 total_imp = total_imp + imp;
			 System.out.println("Valor do imposto = " +imp);
			 System.out.println("Valor transporte = " +transp);
			 System.out.println("Valor seguro = " +seguro);
			 System.out.println("Preço final do produto " +pfinal);
		}
  		}
  	while (preco > 0);	
	System.out.println("Total geral dos impostos = "+total_imp);
	}
}