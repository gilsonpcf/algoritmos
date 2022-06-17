#include <stdio.h>
int main ()
{   float p_fab, perc_d, perc_i, vlr_d, vlr_i, p_final;
	// Mostra mensagem antes da leitura do preço de fábrica
	printf("\nDigite o preço de fábrica: ");
	// Recebe o preço de fábrica
	scanf("%f%*c",&p_fab);
	// Mostra mensagem antes da leitura do percentual do distribuidor
	printf("\nDigite o percentual de lucro do distribuidor: ");
	// Recebe o percentual de lucro do distribuidor
	scanf("%f%*c",&perc_d);
	// Mostra mensagem antes da leitura do percentual de impostos
	printf("\nDigite o percentual de impostos: ");
	// Recebe o percentual de impostos
	scanf("%f%*c",&perc_i);
	// Calcula o valor do lucro do distribuidor
	vlr_d = p_fab * perc_d / 100;
	// Calcula o valor dos impostos
	vlr_i  = p_fab * perc_i / 100;
	// Calcula o preço final do veículo
	p_final = p_fab + vlr_d + vlr_i;
	// Mostra o lucro do distribuidor calculado
	printf("\nO lucro do distribuidor = %4.2f",vlr_d);
	// Mostra o valor calculado dos impostos
	printf("\nO valor dos impostos = %4.2f",vlr_i);
	// Mostra o preço final do veículo ao consumidor
	printf("\nO preço final do veículo ao consumidor = %4.2f",p_final);
	// Pára o programa a espera de um ENTER
	getchar();
	return 0;
}
