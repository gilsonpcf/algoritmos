#include <stdio.h>
int main()
{   float x, y, z;
    // Mostra mensagem de leitura do valor de x
	printf("Digite o valor de x: ");
	// Recebe o valor de x
	scanf("%f%*c",&x);
	// Mostra mensagem de leitura do valor de y
	printf("Digite o valor de y: ");
	// Recebe o valor de y
	scanf("%f%*c",&y);
	// Mostra mensagem de leitura do valor de z
	printf("Digite o valor de z: ");
	// Recebe o valor de z
	scanf("%f%*c",&z);
	if ((x < y + z) && (y < x + z) && (z < x + y))
		 {
			if (x == y && y == z)
				printf("\nTri�ngulo Equil�tero");
			else if (x == y || x == z || y == z)
						printf("\nTri�ngulo Is�sceles");
					 else if (x != y && x != z && y != z)
								printf("\nTri�ngulo Escaleno");
		 }
	else
		 printf("\nEstas medidas n�o formam um tri�ngulo");
	//P�ra o programa a espera de um ENTER
	getchar();
	return 0;
}
