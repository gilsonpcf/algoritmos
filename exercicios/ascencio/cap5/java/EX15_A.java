import java.util.*;
public class EX15_A
{
  public static void main (String args[])
  	{
  		Scanner dado = new Scanner(System.in);
  		float  preco, custo_est, imp, preco_final, adicional, maior_p, menor_p, tot_imp;
  		int i, qtd_b, qtd_n, qtd_c; 
  		char refri, categ;
  		adicional = 0;
  		tot_imp = 0;
  		qtd_b = 0;
  		qtd_n = 0;
  		qtd_c = 0;
  		custo_est = 0;
  		maior_p = 0;
  		menor_p = 0;
  		for (i=1;i<=12;i++)
    	{ 	System.out.println("Digite o preço do unitário do produto ");
      		preco = dado.nextFloat();
			System.out.println("Este produto necessita de refrigeração ");
			refri = dado.next().charAt(0);
			System.out.println("Digite a categoria do produto (A-alimentaão, L-limpeza, V-vestuário) ");
			categ = dado.next().charAt(0);
			if (preco <= 20)
			{ if (categ == 'A')
					custo_est = 2;
				if (categ == 'L')
					custo_est = 3;
				if (categ == 'V')
					custo_est = 4;
			}
			if (preco > 20 && preco <= 50)
			{ if (refri == 'S')
					custo_est = 6;
				else
					custo_est = 0;
			}
			if (preco > 50)
			{ if (refri == 'S')
					{ if (categ == 'A')
							custo_est = 5;
						if (categ == 'L')
							custo_est = 2;
						if (categ == 'V')
							custo_est = 4;
					}
			 else
				{ if (categ == 'A' || categ == 'V')
						custo_est = 0;
					if (categ == 'L')
						custo_est = 1;
				}
		 }
		 if (categ != 'A' && refri != 'S')
				imp = preco * 2 / 100;
		 else
				imp = preco * 4 / 100;
	preco_final = preco + custo_est + imp;
	System.out.println("Custo de estocagem = "+custo_est);
	System.out.println("Valor do imposto = "+imp);
	System.out.println("Preço final = "+preco_final);
	if (preco_final <= 20)
		 { qtd_b = qtd_b + 1;
		   System.out.println("Classificação Barato");
		 }
	if (preco_final > 20 && preco_final <= 100)
		 { qtd_n = qtd_n + 1;
		   System.out.println("Classificação Normal");
		 }
	if (preco_final > 100)
		 { qtd_c = qtd_c + 1;
		   System.out.println("Classificação Caro");
		 }
	adicional = adicional + custo_est + imp;
	tot_imp = tot_imp + imp;
	if (i == 1)
		 { maior_p = preco_final;
			 menor_p = preco_final;
		 }
	else
		 { if (preco_final > maior_p)
				maior_p = preco_final;
			 if (preco_final < menor_p)
				menor_p = preco_final;
		 }
	 }
	 adicional = adicional / 12;
	 System.out.println("Valor adicional = "+adicional);
	 System.out.println("Maior pre‡o final = "+maior_p);
	 System.out.println("Menor pre‡o final = "+menor_p);
	 System.out.println("Total dos impostos = "+tot_imp);
	 System.out.println("Quantidade de produtos baratos "+qtd_b);
	 System.out.println("Quantidade de produtos normais "+qtd_n);
	 System.out.println("Quantidade de produtos caros "+qtd_c);
  	}
}