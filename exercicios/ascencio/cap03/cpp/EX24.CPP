#include <stdio.h>
#include <math.h>
int main ()
{   float hora;
    double conversao, m, h;
	// Mostra mensagem antes da leitura da hora e dos minutos
	printf("\nDigite a hora e os minutos, por exemplo, 4.30\n");
	// Recebe a hora (hora e minutos)
	scanf("%f%*c",&hora);
	// Separa as horas na vari�vel h e os minutos na vari�vel m
	m=modf(hora, &h);
	// Calcula a convers�o para minutos
	conversao = h * 60 + m * 100;
	// Mostra a convers�o
	printf("\nHora convertida para minutos: %5.0f",conversao);
	// P�ra o programa a espera de um ENTER
	getchar();
	return 0;
}
