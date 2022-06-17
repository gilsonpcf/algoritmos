#include <stdio.h>
#include <math.h>
int main()
{   float X, Y, Z;
	// Mostra mensagem antes da leitura do tamanho da escada
	printf("\nDigite o tamanho da escada: ");
	// Recebe o valor de Z que é o tamanho da escada
	scanf("%f%*c",&Z);
	// Mostra mensagem antes da leitura da altura desejada
	printf("\nDigite a altura desejada: ");
	// Recebe o valor de X que é a altura desejada
	scanf("%f%*c",&X);
	// Calcula o valor de Y que é a distância da escada da parede
	Y = pow(Z,2) - pow(X,2);
	// Extrai a raiz quadrada de Y
	Y = sqrt(Y);
	// Mostra valor de Y que é a distância da escada da parede
	printf("\nA distância necessária é: %4.2f",Y);
	// Pára o programa a espera de um ENTER
	getchar();
	return 0;
}
