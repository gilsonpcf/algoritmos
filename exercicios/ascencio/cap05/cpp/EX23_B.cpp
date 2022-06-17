#include <stdio.h>
int main()
{ float sal, qtd, tipo, valor_kw, gasto, acresc, total, tot_geral, qtd_cons;
  tot_geral = 0;
  qtd_cons = 0;
  printf("Digite o valor do salário mínimo\n");
  scanf("%f%*c",&sal);
  valor_kw = sal / 8;
  do
  {
  printf("\nDigite a quantidade de Kw consumida\n");
  scanf("%f%*c",&qtd);
  if (qtd != 0)
		{ gasto = qtd * valor_kw;
			printf("\nDigite o tipo do consumidor (1- Residencial, 2- Comercial, 3-Industrial)\n");
			scanf("%f%*c",&tipo);
			if (tipo == 1)
				acresc = gasto * 5 / 100;
			if (tipo == 2)
				acresc = gasto * 10 / 100;
			if (tipo == 3)
				acresc = gasto * 15 / 100;
			total = gasto + acresc;
			tot_geral = tot_geral + total;
			if (total >= 500 && total <=1000)
				qtd_cons = qtd_cons + 1;
			printf("\nValor gasto = %5.2f",gasto);
			printf("\nValor acréscimo = %5.2f",acresc);
			printf("\nValor final = %5.2f",total);
		}
  }
  while (qtd != 0);	
	printf("\nTotal geral consumido = %5.2f",tot_geral);
	printf("\nTotal de consumidores que pagam entre 500 e 1000 reais = %5.0f",qtd_cons);
	getchar();
	return 0;
}
