#include <stdio.h>
int main()
{   int codigo;
	float sal_base, tempo, imposto, grat, sal_liq;
	//Mostra mensagem solicitando o c�digo do funcion�rio
	printf("Digite o c�digo do funcion�rio ");
	//Recebe o c�digo do funcion�rio
	scanf("%d%*c",&codigo);
	//Mostra mensagem solicitando o sal�rio base
	printf("Digite o sal�rio base do funcion�rio ");
	//Recebe o sal�rio base
	scanf("%f%*c",&sal_base);
	//Mostra mensagem solicitando o tempo de servi�o
	printf("Digite o tempo de servi�o do funcion�rio ");
	//Recebe o tempo de servi�o
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
	//Calcula a gratifica��o
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
	//Mostra a gratifica��o
	printf("\nGratifica��o = %5.2f",grat);
	//Calcula o sal�rio l�quido
	sal_liq = sal_base - imposto + grat;
	//Mostra o sal�rio l�quido
	printf("\nSal�rio l�quido = %5.2f",sal_liq);
	//Mostra a classifica��o
	if (sal_liq <= 350)
		 printf("\nClassifica��o A ");
	else if (sal_liq <600)
				printf("\nClassifica��o B ");
			 else
				printf("\nClassifica��o C ");
	getchar();
	return 0;
}
