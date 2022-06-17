#include <stdio.h>
#include <math.h>
int main ()
{   float hora;
    double conversao, m, h;
	// Mostra mensagem antes da leitura da hora e dos minutos
	printf("\nDigite a hora e os minutos, por exemplo, 4.30\n");
	// Recebe a hora (hora e minutos)
	scanf("%f%*c",&hora);
	// Separa as horas na variável h e os minutos na variável m
	m=modf(hora, &h);
	// Calcula a conversão para minutos
	conversao = h * 60 + m * 100;
	// Mostra a conversão
	printf("\nHora convertida para minutos: %5.0f",conversao);
	// Pára o programa a espera de um ENTER
	getchar();
	return 0;
}
