#include <stdio.h>
#include <math.h>
int main()
{   float num, quad, cubo, r2, r3;
    // Mostra mensagem antes da leitura do n�mero
	printf("\nDigite um n�mero: ");
	// Recebe o n�mero
	scanf("%f%*c",&num);
	// Calcula o n�mero ao quadrado
	quad = pow(num,2);
	// Calcula o n�mero ao cubo
	cubo = pow(num,3);
	// Calcula a raiz quadrada do n�mero
	r2 = sqrt(num);
	// Calcula a raiz c�bica do n�mero
	r3 = exp(log(num) * 1/3);
	// Mostra o n�mero ao quadrado
	printf("\nN�mero ao quadrado = %4.2f",quad);
	// Mostra o n�mero ao cubo
	printf("\nN�mero ao cubo = %4.2f",cubo);
	// Mostra a raiz quadrada do n�mero
	printf("\nRaiz quadrada = %4.2f",r2);
	// Mostra a raiz c�bica do n�mero
	printf("\nRaiz c�bica  = %4.2f",r3);
	// P�ra o programa a espera de um ENTER
	getchar();
	return 0;
}
