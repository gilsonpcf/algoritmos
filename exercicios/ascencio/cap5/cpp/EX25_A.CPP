#include <stdio.h>
int main()
{ float preco, imp, transp, seguro, final, total_imp, origem;
  char meio_t, carga;
  printf("Digite o preço unitário: ");
  scanf("%f%*c",&preco);
  while (preco > 0)
    { printf("Digite a origem do produto (1-EUA, 2-México, 3-outros): ");
      scanf("%f%*c",&origem);
      printf("Digite o meio de transporte utilizado (T-Terrestre, F-Fluvial, A-Aéreo): ");
      scanf("%c%*c",&meio_t);
      printf("Trata-se de uma carga perigosa (S ou N)?: ");
      scanf("%c%*c",&carga);
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
			 final = preco +imp + transp + seguro;
			 total_imp = total_imp + imp;
			 printf("\nValor do imposto = %5.2f",imp);
			 printf("\nValor transporte = %5.2f",transp);
			 printf("\nValor seguro = %5.2f",seguro);
			 printf("\nPreço final do produto %5.2f",final);
			 printf("\n\nDigite o preço unitário: ");
			 scanf("%f%*c",&preco);
		}
	printf("\n\nTotal geral dos impostos = %5.2f",total_imp);
	getchar();
	return 0;
}
