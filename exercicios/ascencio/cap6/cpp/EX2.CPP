#include <stdio.h>

int main()
{   float qtd[10], preco[10], tot_geral, tot_vend, comissao, maior;
	int i, ind;

	tot_geral= 0;
	for (i=0;i<10;i++)
	{   printf("\nDigite a quantidade vendida do %d.o produto: ", i+1);
		scanf("%f%*c", &qtd[i]);
		printf("Digite o preco do %d.o produto: ", i+1);
		scanf("%f%*c", &preco[i]);
	}
	for (i=0;i<10;i++)
	{   tot_vend = qtd[i] * preco[i];
		printf("\n\nQuandidade vendida do %d.o produto: %8.2f", i+1, qtd[i]);
		printf("\nValor do %d.o produto: %8.2f ", i+1, preco[i]);
		printf("\nTotal geral da venda: %10.2f", tot_vend);
		tot_geral = tot_geral + tot_vend;
	}
	comissao = tot_geral * 5 /100;
	printf("\n\nValor total das vendas: %10.2f Valor da comissão: %10.2f", tot_geral, comissao);
	maior = qtd[0];
	ind =  0;
	for (i=0;i<10;i++)
	{ if (qtd[i] > maior)
			 { maior = qtd[i];
				 ind = i;
			}
	}
	printf("\n\nA maior quantidade encontrada foi %8.2f referente ao %d.o produto ", maior, ind+1);
	getchar();
	return 0;
}

