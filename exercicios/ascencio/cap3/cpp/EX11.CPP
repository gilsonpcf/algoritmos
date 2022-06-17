#include <stdio.h>
#include <math.h>
int main()
{   float num, quad, cubo, r2, r3;
    // Mostra mensagem antes da leitura do número
	printf("\nDigite um número: ");
	// Recebe o número
	scanf("%f%*c",&num);
	// Calcula o número ao quadrado
	quad = pow(num,2);
	// Calcula o número ao cubo
	cubo = pow(num,3);
	// Calcula a raiz quadrada do número
	r2 = sqrt(num);
	// Calcula a raiz cúbica do número
	r3 = exp(log(num) * 1/3);
	// Mostra o número ao quadrado
	printf("\nNúmero ao quadrado = %4.2f",quad);
	// Mostra o número ao cubo
	printf("\nNúmero ao cubo = %4.2f",cubo);
	// Mostra a raiz quadrada do número
	printf("\nRaiz quadrada = %4.2f",r2);
	// Mostra a raiz cúbica do número
	printf("\nRaiz cúbica  = %4.2f",r3);
	// Pára o programa a espera de um ENTER
	getchar();
	return 0;
}
