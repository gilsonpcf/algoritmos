#include <stdio.h>
int main()
{ float  preco, custo_est, imp, preco_final, adicional, maior_p, menor_p, tot_imp;
  int i, qtd_b, qtd_n, qtd_c; 
  char refri, categ;
  adicional = 0;
  tot_imp = 0;
  qtd_b = 0;
  qtd_n = 0;
  qtd_c = 0;
  i=1;
  do
    { 
            printf("\nDigite o preço do unitário do produto ");
            scanf("%f%*c",&preco);
			printf("Este produto necessita de refrigeração? ");
			scanf("%c%*c",&refri);
			printf("Digite a categoria do produto (A-alimentação, L-limpeza, V-vestuário) ");
			scanf("%c%*c",&categ);
			if (preco <= 20)
			{ 
                if (categ == 'A')
					custo_est = 2;
				if (categ == 'L')
					custo_est = 3;
				if (categ == 'V')
					custo_est = 4;
			}
			if (preco > 20 && preco <= 50)
			{ 
                if (refri == 'S')
					custo_est = 6;
				else
					custo_est = 0;
			}
			if (preco > 50)
			{  
               if (refri == 'S')
					{ 
                        if (categ == 'A')
							custo_est = 5;
						if (categ == 'L')
							custo_est = 2;
						if (categ == 'V')
							custo_est = 4;
					}
			   else
				   { 
                       if (categ == 'A' || categ == 'V')
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
	printf("\nCusto de estocagem = %5.2f",custo_est);
	printf("\nValor do imposto = %5.2f",imp);
	printf("\nPreço final = %5.2f",preco_final);
	if (preco_final <= 20)
		 { 
             qtd_b = qtd_b + 1;
			 printf("\nClassificação Barato");
		 }
	if (preco_final > 20 && preco_final <= 100)
		 { 
             qtd_n = qtd_n + 1;
			 printf("\nClassificação Normal");
		 }
	if (preco_final > 100)
		 { 
             qtd_c = qtd_c + 1;
			 printf("\nClassificação Caro");
		 }
	adicional = adicional + custo_est + imp;
	tot_imp = tot_imp + imp;
	if (i == 1)
		 { 
             maior_p = preco_final;
			 menor_p = preco_final;
		 }
	else
		 { 
             if (preco_final > maior_p)
				maior_p = preco_final;
			 if (preco_final < menor_p)
				menor_p = preco_final;
		 }
	 i++;
  }
     while (i <=12);	 
	 adicional = adicional / 12;
	 printf("\nValor adicional = %5.2f",adicional);
	 printf("\nMaior pre‡o final = %5.2f",maior_p);
	 printf("\nMenor pre‡o final = %5.2f",menor_p);
	 printf("\nTotal dos impostos = %5.2f",tot_imp);
	 printf("\nQuantidade de produtos baratos %d",qtd_b);
	 printf("\nQuantidade de produtos normais %d",qtd_n);
	 printf("\nQuantidade de produtos caros %d",qtd_c);
	 getchar();
	 return 0;
}
