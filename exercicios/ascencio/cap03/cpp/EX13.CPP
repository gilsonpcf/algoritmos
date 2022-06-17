#include <stdio.h>
int main()
{   float pes, polegadas, jardas, milhas;
	// Mostra mensagem antes da leitura da medida em pés
	printf("\nDigite uma medida em pés: ");
	// Recebe a medida em pés
	scanf("%f%*c",&pes);
	// Calcula a medida em polegadas
	polegadas = pes * 12;
	// Calcula a medida em jardas
	jardas = pes / 3;
	// Calcula a medida em milhas
	milhas = jardas / 1760;
	// Mostra a medida em polegadas
	printf("\nEm polegadas = %4.2f",polegadas);
	// Mostra a medida em jardas
	printf("\nEm jardas = %4.2f",jardas);
	// Mostra a medida em milhas
	printf("\nEm milhas = %0.12f",milhas);
	// Pára o programa a espera de um ENTER
	getchar();
	return 0;
}
