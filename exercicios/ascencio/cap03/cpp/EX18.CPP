#include <stdio.h>
int main ()
{   float peso_saco, racao_gato1, racao_gato2, total_final;
	// Mostra mensagem antes da leitura do peso do saco
	printf("\nDigite o peso do saco de ra��o (em Kg): ");
	// Recebe peso do saco de ra��o
	scanf("%f%*c",&peso_saco);
	// Mostra mensagem antes da leitura da quantidade do gato1
	printf("\nDigite a quantidade de ra��o consumida pelo 1� gato (em gramas): ");
	// Recebe a quantidade de ra��o gasta com o 1� gato
	scanf("%f%*c",&racao_gato1);
	// Mostra mensagem antes da leitura da quantidade do gato2
	printf("\nDigite a quantidade de ra��o consumida pelo 2� gato (em gramas): ");
	// Recebe a quantidade de ra��o gasta com o 2� gato
	scanf("%f%*c",&racao_gato2);
	// Converte a ra��o do gato 1 para Kg
	racao_gato1 = racao_gato1 / 1000;
	// Converte a ra��o do gato 2 para Kg
	racao_gato2 = racao_gato2 / 1000;
	// Calcula o restante ap�s 5 dias
	total_final = peso_saco - 5 * (racao_gato1 + racao_gato2);
	// Mostra o restante
	printf("\nTotal de ra��o restante (em Kg): %4.3f",total_final);
	// P�ra o programa a espera de um ENTER
	getchar();
	return 0;
}
