#include <stdio.h>
int main ()
{   float custo, convite, qtd;
	// Mostra mensagem antes da leitura do custo do espet�culo
	printf("\nDigite o custo do espet�culo: ");
	// Recebe o custo do espet�culo
	scanf("%f%*c",&custo);
	// Mostra mensagem antes da leitura do pre�o do convite
	printf("\nDigite o pre�o do convite: ");
	// Recebe o pre�o do convite
	scanf("%f%*c",&convite);
	// Calcula o total de convites necess�rios para cobrir as despesas
	qtd = custo / convite;
	// Mostra quantidade calculada
	printf("\nQuantidade de convites necess�ria: %4.2f",qtd);
	// P�ra o programa a espera de um ENTER
	getchar();
	return 0;
}
