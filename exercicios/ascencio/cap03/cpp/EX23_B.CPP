#include <stdio.h>
#include <math.h>
int main ()
{   float num, f;
	double i, a;
	// Mostra mensagem antes da leitura do n�mero real
	printf("\nDigite um n�mero real: ");
	// Recebe um n�mero real
	scanf("%f%*c",&num);
	// Extrai a parte inteira do n�mero, armazenando-a na vari�vel i 
    // Extrai a parte fracion�ria do n�mero, armazenando-a na vari�vel f
	f=modf(num, &i);
	// Arredonda o n�mero para cima
	a = floor(num);
	// Mostra a parte inteira do n�mero digitado
	printf("\nParte inteira do n�mero: %4.2f",i);
	// Mostra a parte fracion�ria do n�mero
	printf("\nParte fracion�ria do n�mero: %4.2f",f);
	// Mostra o arredondamento do n�mero
	printf("\nArredondamento do n�mero: %4.2f",a);
	// P�ra o programa a espera de um ENTER
	getchar();
	return 0;
}
