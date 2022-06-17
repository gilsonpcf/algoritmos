#include <stdio.h>
int main ()
{   float a_degrau, a_usuario, qtd_degraus;
	// Mostra mensagem antes da leitura da altura do degrau
	printf("\nDigite a altura do degrau: ");
	// Recebe a altura do degrau
	scanf("%f%*c",&a_degrau);
	// Mostra mensagem antes da leitura da altura desejada pelo usuário
	printf("\nDigite a altura desejada pelo usuário: ");
	// Recebe a altura desejada pelo usuário
	scanf("%f%*c",&a_usuario);
	// Calcula o total de degraus necessários
	qtd_degraus = a_usuario / a_degrau;
	// Mostra total calculado
	printf("\nTotal de degraus necessários: %4.2f",qtd_degraus);
	// Pára o programa a espera de um ENTER
	getchar();
	return 0;
}
