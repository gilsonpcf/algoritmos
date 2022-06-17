#include <stdio.h>
int main ()
{   float vlr_sal, qtd_kw, vlr_kw, vlr_reais, desc, vlr_desc;
	// Mostra mensagem antes da leitura do salário mímimo
	printf("\nDigite o valor do salário mínimo: ");
	// Recebe o valor do salário mínimo
	scanf("%f%*c",&vlr_sal);
	// Mostra mensagem antes da leitura da quantidade de quilowatts
	printf("\nDigite a quantidade de Kws consumidos: ");
	// Recebe a quantidade de Kws
	scanf("%f%*c",&qtd_kw);
	// Calcula o valor de cada Kw
	vlr_kw = vlr_sal / 5;
	// Calcula o valor a ser pago pelo residência
	vlr_reais = vlr_kw * qtd_kw;
	// Calcula o desconto de 15%
	desc = vlr_reais * 15 / 100;
	// Calcula valor a ser pago com desconto de 15%
	vlr_desc = vlr_reais - desc;
	// Mostra o valor do Kw
	printf("\nValor do Kw: %4.2f",vlr_kw);
	// Mostra valor a ser pago
	printf("\nValor a ser pago: %4.2f",vlr_reais);
	//Mostra valor com desconto
	printf("\nValor a ser pago com desconto: %4.2f",vlr_desc);
	// Pára o programa a espera de um ENTER
	getchar();
	return 0;
}
