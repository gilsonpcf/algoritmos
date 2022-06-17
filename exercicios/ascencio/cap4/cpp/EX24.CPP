#include <stdio.h>
int main()
{   float pre, valor_adic, imposto, pre_custo, desconto, novo_pre;
	char tipo, refrig;
	//Mostra mensagem solicitando o preço do produto
	printf("\nDigite o pre‡o do produto ");
	//Recebe o preço do produto
	scanf("%f%*c",&pre);
	//Mostra mensagem solicitando o tipo do produto
	printf("\nDigite o tipo do produto (A - alimentação, L - Limpeza e V - vestuário) ");
	//Recebe o tipo do produto
	scanf("%c%*c",&tipo);
	//Mostra mensagem solicitando a refrigeração
	printf("\nDigite S ou N para a necessidade de refrigeração do produto ");
	//Recebe a refrigeração
	scanf("%c%*c",&refrig);
	//Calcula o valor adicional
	if (refrig == 'N')
		 {
			if (tipo == 'A')
				{
					if (pre < 15)
						valor_adic = 2;
					else
						valor_adic = 5;
				}
			if (tipo == 'L')
				{
					if (pre < 10)
						valor_adic = 1.50;
					else
						valor_adic = 2.50;
				}
			if (tipo == 'V')
				{
					if (pre < 30)
						valor_adic = 3;
					else
						valor_adic = 2.5;
			 }
		}
	else
		 {
			if (tipo == 'A')
				valor_adic = 8;
			if (tipo == 'L')
				valor_adic = 0;
			if (tipo == 'V')
				valor_adic = 0;
			}
	//Mostra o valor adicional
	printf("\nValor adicional = %5.2f",valor_adic);
	//Calcula o imposto
	if (pre < 25)
		 imposto = pre * 5/100;
	else
		 imposto = pre * 8/100;
	//Mostra o valor do imposto
	printf("\nValor do imposto = %5.2f",imposto);
	//Calcula o preço de custo
	pre_custo = pre + imposto;
	//Mostra o preço de custo
	printf("\nValor do preço de custo = %5.2f",pre_custo);
	//Calcula o desconto
	if (tipo != 'A' && refrig != 'S')
		 desconto = 3 * pre_custo / 100;
	else
		 desconto = 0;
	//Mostra o desconto
	printf("\nValor do desconto = %5.2f",desconto);
	//Calcula o novo preço
	novo_pre = pre + valor_adic - desconto;
	// Mostra o novo preço
	printf("\nValor do novo preço = %5.2f",novo_pre);
	//Mostra a classificação
	if (novo_pre <= 50)
		 printf("\nBarato");
	else if (novo_pre < 100)
				printf("\nNormal");
			 else
				printf("\nCaro");
	getchar();
	return 0;
}
