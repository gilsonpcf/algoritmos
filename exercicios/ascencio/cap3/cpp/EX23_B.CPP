#include <stdio.h>
#include <math.h>
int main ()
{   float num, f;
	double i, a;
	// Mostra mensagem antes da leitura do número real
	printf("\nDigite um número real: ");
	// Recebe um número real
	scanf("%f%*c",&num);
	// Extrai a parte inteira do número, armazenando-a na variável i 
    // Extrai a parte fracionária do número, armazenando-a na variável f
	f=modf(num, &i);
	// Arredonda o número para cima
	a = floor(num);
	// Mostra a parte inteira do número digitado
	printf("\nParte inteira do número: %4.2f",i);
	// Mostra a parte fracionária do número
	printf("\nParte fracionária do número: %4.2f",f);
	// Mostra o arredondamento do número
	printf("\nArredondamento do número: %4.2f",a);
	// Pára o programa a espera de um ENTER
	getchar();
	return 0;
}
