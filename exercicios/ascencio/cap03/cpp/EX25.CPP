#include <stdio.h>
int main ()
{   float custo, convite, qtd;
	// Mostra mensagem antes da leitura do custo do espetáculo
	printf("\nDigite o custo do espetáculo: ");
	// Recebe o custo do espetáculo
	scanf("%f%*c",&custo);
	// Mostra mensagem antes da leitura do preço do convite
	printf("\nDigite o preço do convite: ");
	// Recebe o preço do convite
	scanf("%f%*c",&convite);
	// Calcula o total de convites necessários para cobrir as despesas
	qtd = custo / convite;
	// Mostra quantidade calculada
	printf("\nQuantidade de convites necessária: %4.2f",qtd);
	// Pára o programa a espera de um ENTER
	getchar();
	return 0;
}
