#include <stdio.h>
int main ()
{   float peso_saco, racao_gato1, racao_gato2, total_final;
	// Mostra mensagem antes da leitura do peso do saco
	printf("\nDigite o peso do saco de ração (em Kg): ");
	// Recebe peso do saco de ração
	scanf("%f%*c",&peso_saco);
	// Mostra mensagem antes da leitura da quantidade do gato1
	printf("\nDigite a quantidade de ração consumida pelo 1º gato (em gramas): ");
	// Recebe a quantidade de ração gasta com o 1º gato
	scanf("%f%*c",&racao_gato1);
	// Mostra mensagem antes da leitura da quantidade do gato2
	printf("\nDigite a quantidade de ração consumida pelo 2º gato (em gramas): ");
	// Recebe a quantidade de ração gasta com o 2º gato
	scanf("%f%*c",&racao_gato2);
	// Converte a ração do gato 1 para Kg
	racao_gato1 = racao_gato1 / 1000;
	// Converte a ração do gato 2 para Kg
	racao_gato2 = racao_gato2 / 1000;
	// Calcula o restante após 5 dias
	total_final = peso_saco - 5 * (racao_gato1 + racao_gato2);
	// Mostra o restante
	printf("\nTotal de ração restante (em Kg): %4.3f",total_final);
	// Pára o programa a espera de um ENTER
	getchar();
	return 0;
}
