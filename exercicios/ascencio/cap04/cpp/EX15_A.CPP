#include <stdio.h>
int main()
{   float sal_min, nht, ndep, nhet, sal_receber, vh, smes, vdep, vhe, imp, sbruto, sliq, grat;
  	// Mostra mensagem para receber o valor do salário mínimo
	printf("Digite o valor do salário mínimo ");
	// Recebe o valor do salário mínimo
	scanf("%f%*c",&sal_min);
	// Mostra mensagem para receber o número de horas trabalhadas
	printf("Digite o número de horas trabalhadas ");
	// Recebe o número de horas trabalhadas
	scanf("%f%*c",&nht);
	// Mostra mensagem para receber o número de dependentes
	printf("Digite o número de dependentes ");
	// Recebe o número de dependentes
	scanf("%f%*c",&ndep);
	// Mostra mensagem para receber o número de horas extras
	printf("Digite o número de horas extras trabalhadas ");
	// Recebe o número de horas extras
	scanf("%f%*c",&nhet);
	// Calcula o valor da hora trabalhada
	vh = sal_min * 1/5;
	// Calcula o valor do salário mês
	smes = nht * vh;
	// Calcula o valor dos dependentes
	vdep = ndep * 32;
	// Calcula a valor a receber pelas horas extras
	vhe = nhet * (vh + (vh * 50/100));
	// Calcula o valor do sal rio bruto
	sbruto = smes + vdep + vhe;
	// Calcula o imposto
	if (sbruto < 200)
		 imp = 0;
	if (sbruto >= 200 && sbruto <= 500)
		 imp = sbruto * 10/100;
	if (sbruto > 500)
		 imp = sbruto * 20/100;
	// Calcula o salário líquido
	sliq = sbruto - imp;
	// Calcula a gratificação
	if (sliq <= 350)
		 grat = 100;
	if (sliq > 350)
		 grat = 50;
	// Calcula o salário a receber
	sal_receber = sliq + grat;
	// Mostra o valor do salário a receber
	printf("\nSalário a receber = %5.2f",sal_receber);
	//Pára o programa a espera de um ENTER
	getchar();
	return 0;
}

