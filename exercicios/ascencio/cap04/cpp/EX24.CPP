#include <stdio.h>
int main()
{   float pre, valor_adic, imposto, pre_custo, desconto, novo_pre;
	char tipo, refrig;
	//Mostra mensagem solicitando o pre�o do produto
	printf("\nDigite o pre�o do produto ");
	//Recebe o pre�o do produto
	scanf("%f%*c",&pre);
	//Mostra mensagem solicitando o tipo do produto
	printf("\nDigite o tipo do produto (A - alimenta��o, L - Limpeza e V - vestu�rio) ");
	//Recebe o tipo do produto
	scanf("%c%*c",&tipo);
	//Mostra mensagem solicitando a refrigera��o
	printf("\nDigite S ou N para a necessidade de refrigera��o do produto ");
	//Recebe a refrigera��o
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
	//Calcula o pre�o de custo
	pre_custo = pre + imposto;
	//Mostra o pre�o de custo
	printf("\nValor do pre�o de custo = %5.2f",pre_custo);
	//Calcula o desconto
	if (tipo != 'A' && refrig != 'S')
		 desconto = 3 * pre_custo / 100;
	else
		 desconto = 0;
	//Mostra o desconto
	printf("\nValor do desconto = %5.2f",desconto);
	//Calcula o novo pre�o
	novo_pre = pre + valor_adic - desconto;
	// Mostra o novo pre�o
	printf("\nValor do novo pre�o = %5.2f",novo_pre);
	//Mostra a classifica��o
	if (novo_pre <= 50)
		 printf("\nBarato");
	else if (novo_pre < 100)
				printf("\nNormal");
			 else
				printf("\nCaro");
	getchar();
	return 0;
}
