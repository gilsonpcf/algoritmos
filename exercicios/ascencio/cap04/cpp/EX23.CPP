#include <stdio.h>
int main()
{   float sal_min, nht, coeficiente, sal_bruto, imposto, grat, auxilio, sal_liq;
	char turno, categoria;
	//Mostra mensagem solicitando o valor do sal�rio m�nimo
	printf("Digite o valor do sal�rio m�nimo ");
	//Recebe o valor do sal�rio m�nimo
	scanf("%f%*c",&sal_min);
	//Mostra mensagem solicitando o turno de trabalho
	printf("Digite o turno de trabalho (M, V ou N) ");
	//Recebe o turno de trabalho
	scanf("%c%*c",&turno);
	//Mostra mensagem solicitando a categoria
	printf("Digite a categoria do trabalhador (O ou G) ");
	//Recebe a categoria
	scanf("%c%*c",&categoria);
	//Mostra mensagem solicitando o n�mero de horas trabalhadas
	printf("Digite o n�mero de horas trabalhadas ");
	//Recebe o n�mero de horas trabalhadas
	scanf("%f%*c",&nht);
	//Calcula o coeficiente
	if (turno == 'M')
		 coeficiente = sal_min * 10/100;
	if (turno == 'V')
		 coeficiente = sal_min * 15/100;
	if (turno == 'N')
		 coeficiente = sal_min * 12/100;
	//Mostra o coeficiente
	printf("\nValor do Coeficiente = %5.2f",coeficiente);
	//Calcula o sal�rio bruto
	sal_bruto = nht * coeficiente;
	//Mostra o sal�rio bruto
	printf("\nValor do sal�rio bruto = %5.2f",sal_bruto);
	//Calcula o imposto
	if (categoria == 'O')
		 {
			if (sal_bruto >= 300)
				imposto = sal_bruto * 5/100;
			else
				imposto = sal_bruto * 3/100;
		 }
	else
		 {
			if (sal_bruto >= 400)
				imposto = sal_bruto * 6/100;
			else
				imposto = sal_bruto * 4/100;
		 }
	//Mostra o valor do imposto
	printf("\nValor do imposto = %5.2f",imposto);
	//Calcula a gratifica��o
	if (turno == 'N' && nht > 80)
		 grat = 50;
	else
		 grat = 30;
	//Mostra a gratifica��o
	printf("\nGratifica��o = %5.2f",grat);
	//Calcula o aux�lio comida
	if (categoria == 'O' || coeficiente <= 25)
		 auxilio = sal_bruto/3;
	else
		 auxilio = sal_bruto/2;
	//Mostra o aux�lio comida
	printf("\nValor do aux�lio comida = %5.2d",auxilio);
	//Calcula o sal�rio l�quido
	sal_liq = sal_bruto - imposto + grat + auxilio;
	//Mostra o sal�rio l�quido
	printf("\nValor do sal�rio l�quido = %5.2f",sal_liq);
	//Mostra a classifica��o
	if (sal_liq < 350)
		 printf("\nMal Remunerado");
	if (sal_liq >= 350 && sal_liq <= 600)
		 printf("\nNormal");
	if (sal_liq > 600)
		 printf("\nBem Remunerado");
	getchar();
	return 0;
}
