#include <stdio.h>
int main()
{   float sal_min, nht, ndep, nhet, sal_receber, vh, smes, vdep, vhe, imp, sbruto, sliq, grat;
  	// Mostra mensagem para receber o valor do sal�rio m�nimo
	printf("Digite o valor do sal�rio m�nimo ");
	// Recebe o valor do sal�rio m�nimo
	scanf("%f%*c",&sal_min);
	// Mostra mensagem para receber o n�mero de horas trabalhadas
	printf("Digite o n�mero de horas trabalhadas ");
	// Recebe o n�mero de horas trabalhadas
	scanf("%f%*c",&nht);
	// Mostra mensagem para receber o n�mero de dependentes
	printf("Digite o n�mero de dependentes ");
	// Recebe o n�mero de dependentes
	scanf("%f%*c",&ndep);
	// Mostra mensagem para receber o n�mero de horas extras
	printf("Digite o n�mero de horas extras trabalhadas ");
	// Recebe o n�mero de horas extras
	scanf("%f%*c",&nhet);
	// Calcula o valor da hora trabalhada
	vh = sal_min * 1/5;
	// Calcula o valor do sal�rio m�s
	smes = nht * vh;
	// Calcula o valor dos dependentes
	vdep = ndep * 32;
	// Calcula a valor a receber pelas horas extras
	vhe = nhet * (vh + (vh * 50/100));
	// Calcula o valor do sal�rio bruto
	sbruto = smes + vdep + vhe;
	// Calcula o imposto
	if (sbruto < 200)
		 imp = 0;
	else if (sbruto >= 200 && sbruto <= 500)
		   imp = sbruto * 10/100;
         else   
		   imp = sbruto * 20/100;
	// Calcula o sal�rio l�quido
	sliq = sbruto - imp;
	// Calcula a gratifica��o
	if (sliq <= 350)
		 grat = 100;
	else 
		 grat = 50;
	// Calcula o sal�rio a receber
	sal_receber = sliq + grat;
	// Mostra o valor do sal�rio a receber
	printf("\nSal�rio a receber = %5.2f",sal_receber);
	//P�ra o programa a espera de um ENTER
	getchar();
	return 0;
}

