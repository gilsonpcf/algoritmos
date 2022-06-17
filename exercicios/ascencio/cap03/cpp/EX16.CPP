#include <stdio.h>
int main ()
{   float horas_t, vlr_sal_min, vlr_hora_t, vlr_sal_bru, imp, vlr_sal_liq;
	// Mostra mensagem antes da leitura do total de horas trabalhadas
	printf("\nDigite o total de horas trabalhadas: ");
	// Recebe total de horas trabalhadas
	scanf("%f%*c",&horas_t);
	// Mostra mensagem antes da leitura do sal rio m¡nimo
	printf("\nDigite o valor do salário mínimo: ");
	// Recebe valor do salário mínimo
	scanf("%f%*c",&vlr_sal_min);
	// Calcula o valor de cada hora trabalhada
	vlr_hora_t =  vlr_sal_min / 2;
	// Calcula o salário bruto
	vlr_sal_bru = vlr_hora_t * horas_t;
	// Calcula o imposto de 3% do salário bruto
	imp = vlr_sal_bru * 3 / 100;
	// Calcula o salário a receber
	vlr_sal_liq = vlr_sal_bru - imp;
	// Mostra o salário a receber
	printf("\nO salário a receber é: %4.2f",vlr_sal_liq);
	// Pára o programa a espera de um ENTER
	getchar();
	return 0;
}
