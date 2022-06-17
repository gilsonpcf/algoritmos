#include <stdio.h>
#include <math.h>
int main()
{   float num1, num2, r1, r2;
	// Mostra mensagem antes da leitura do 1º número
	printf("\nDigite um número: ");
	// Recebe o 1º número
	scanf("%f%*c",&num1);
	// Mostra mensagem antes da leitura do 2º número
	printf("\nDigite outro número: ");
	// Recebe o 2º número
	scanf("%f%*c",&num2);
	// Calcula o 1º número elevado ao 2º
	r1 = pow (num1, num2);
	// Calcula o 2º número elevado ao 1º
	r2 = pow (num2, num1);
	// Mostra o 1º número elevado ao 2º
	printf("\nResposta 1 = %4.2f",r1);
	// Mostra o 2º número elevado ao 1º
	printf("\nResposta 2 = %4.2f",r2);
	// Pára o programa a espera de um ENTER
	getchar();
	return 0;
}
