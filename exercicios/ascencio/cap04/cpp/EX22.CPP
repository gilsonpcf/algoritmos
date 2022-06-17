#include <stdio.h>
int main()
{   int codigo;
	float sal_base, tempo, imposto, grat, sal_liq;
	//Mostra mensagem solicitando o código do funcionário
	printf("Digite o código do funcionário ");
	//Recebe o código do funcionário
	scanf("%d%*c",&codigo);
	//Mostra mensagem solicitando o sal rio base
	printf("Digite o salário base do funcionário ");
	//Recebe o salário base
	scanf("%f%*c",&sal_base);
	//Mostra mensagem solicitando o tempo de serviço
	printf("Digite o tempo de serviço do funcionário ");
	//Recebe o tempo de serviço
	scanf("%f%*c",&tempo);
	//Calcula o imposto
	if (sal_base < 200)
		 imposto = 0;
	else if (sal_base <= 450)
				imposto = 0.03 * sal_base;
			 else if (sal_base < 700)
						 imposto = 0.08 * sal_base;
						else
						 imposto = 0.12 * sal_base;
	//Mostra o imposto
	printf("Imposto =  %5.2f",imposto);
	//Calcula a gratificação
	if (sal_base > 500)
		 {
			if (tempo <= 3)
				grat = 20;
			else
				grat = 30;
		 }
	else
		{
			if (tempo <= 3)
				grat = 23;
			else if (tempo < 6)
						grat = 35;
					 else
						grat = 33;
		}
	//Mostra a gratificação
	printf("\nGratificação = %5.2f",grat);
	//Calcula o salário líquido
	sal_liq = sal_base - imposto + grat;
	//Mostra o salário líquido
	printf("\nSalário líquido = %5.2f",sal_liq);
	//Mostra a classificação
	if (sal_liq <= 350)
		 printf("\nClassificação A ");
	else if (sal_liq <600)
				printf("\nClassificação B ");
			 else
				printf("\nClassificação C ");
	getchar();
	return 0;
}
