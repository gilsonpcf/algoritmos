#include <stdio.h>
#include <math.h>
int main()
{   float X, Y, Z;
	// Mostra mensagem antes da leitura do tamanho da escada
	printf("\nDigite o tamanho da escada: ");
	// Recebe o valor de Z que � o tamanho da escada
	scanf("%f%*c",&Z);
	// Mostra mensagem antes da leitura da altura desejada
	printf("\nDigite a altura desejada: ");
	// Recebe o valor de X que � a altura desejada
	scanf("%f%*c",&X);
	// Calcula o valor de Y que � a dist�ncia da escada da parede
	Y = pow(Z,2) - pow(X,2);
	// Extrai a raiz quadrada de Y
	Y = sqrt(Y);
	// Mostra valor de Y que � a dist�ncia da escada da parede
	printf("\nA dist�ncia necess�ria �: %4.2f",Y);
	// P�ra o programa a espera de um ENTER
	getchar();
	return 0;
}
