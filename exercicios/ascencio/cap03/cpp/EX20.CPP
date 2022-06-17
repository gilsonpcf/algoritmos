#include <stdio.h>
#include <math.h>
int main()
{   float ang, alt, escada, radiano;
	// Mostra mensagem antes da leitura do valor do ângulo
	printf("\nDigite o valor do ângulo em graus: ");
	// Recebe valor de ângulo
	scanf("%f%*c",&ang);
	// Mostra mensagem antes da leitura da altura da ponta da escada
	printf("\nDigite a altura da parede onde está a ponta da escada: ");
	// Recebe valor da altura da parede onde está a ponta da escada
	scanf("%f%*c",&alt);
	// Converte o ângulo digitado em graus para radianos
	radiano = ang * 3.14 / 180;
	// Calcula tamanho da escada
	escada = alt / sin(radiano);
	// Mostra o tamanho da escada
	printf("\nO comprimento da escada é %4.2f",escada);
	// Pára o programa a espera de um ENTER
	getchar();
	return 0;
}
