#include <stdio.h>
int main ()
{   float a_degrau, a_usuario, qtd_degraus;
	// Mostra mensagem antes da leitura da altura do degrau
	printf("\nDigite a altura do degrau: ");
	// Recebe a altura do degrau
	scanf("%f%*c",&a_degrau);
	// Mostra mensagem antes da leitura da altura desejada pelo usu�rio
	printf("\nDigite a altura desejada pelo usu�rio: ");
	// Recebe a altura desejada pelo usu�rio
	scanf("%f%*c",&a_usuario);
	// Calcula o total de degraus necess�rios
	qtd_degraus = a_usuario / a_degrau;
	// Mostra total calculado
	printf("\nTotal de degraus necess�rios: %4.2f",qtd_degraus);
	// P�ra o programa a espera de um ENTER
	getchar();
	return 0;
}
