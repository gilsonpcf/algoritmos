#include <stdio.h>
int main()
{   float pre, venda, novo_pre;
  	// Mostra mensagem antes da leitura do preço atual
	printf("\nDigite o preço atual: ");
	// Recebe o preço atual
	scanf("%f%*c",&pre);
	// Mostra mensagem antes da leitura das vendas mensais
	printf("Digite a venda mensal: ");
	// Recebe o valor das vendas mensais
	scanf("%f%*c",&venda);
	// Calcula o novo preço
	if (venda < 500 || pre < 30)
		 novo_pre = pre + pre * 10/100;
	if ((venda >= 500 && venda < 1200) || (pre >= 30 && pre < 80))
		 novo_pre = pre + pre * 15/100;
	if (venda >= 1200 || pre >= 80)
		 novo_pre = pre - pre * 20/100;
	// Mostra o novo preço
	printf("\nNovo preço = %5.2f",novo_pre);
	//Pára o programa a espera de um ENTER
	getchar();
	return 0;
}
