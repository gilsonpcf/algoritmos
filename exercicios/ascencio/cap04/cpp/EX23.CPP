#include <stdio.h>
int main()
{   float sal_min, nht, coeficiente, sal_bruto, imposto, grat, auxilio, sal_liq;
	char turno, categoria;
	//Mostra mensagem solicitando o valor do salário mínimo
	printf("Digite o valor do salário mínimo ");
	//Recebe o valor do salário mínimo
	scanf("%f%*c",&sal_min);
	//Mostra mensagem solicitando o turno de trabalho
	printf("Digite o turno de trabalho (M, V ou N) ");
	//Recebe o turno de trabalho
	scanf("%c%*c",&turno);
	//Mostra mensagem solicitando a categoria
	printf("Digite a categoria do trabalhador (O ou G) ");
	//Recebe a categoria
	scanf("%c%*c",&categoria);
	//Mostra mensagem solicitando o número de horas trabalhadas
	printf("Digite o número de horas trabalhadas ");
	//Recebe o número de horas trabalhadas
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
	//Calcula o salário bruto
	sal_bruto = nht * coeficiente;
	//Mostra o salário bruto
	printf("\nValor do salário bruto = %5.2f",sal_bruto);
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
	//Calcula a gratificação
	if (turno == 'N' && nht > 80)
		 grat = 50;
	else
		 grat = 30;
	//Mostra a gratificação
	printf("\nGratificação = %5.2f",grat);
	//Calcula o auxílio comida
	if (categoria == 'O' || coeficiente <= 25)
		 auxilio = sal_bruto/3;
	else
		 auxilio = sal_bruto/2;
	//Mostra o auxílio comida
	printf("\nValor do auxílio comida = %5.2d",auxilio);
	//Calcula o salário líquido
	sal_liq = sal_bruto - imposto + grat + auxilio;
	//Mostra o salário líquido
	printf("\nValor do salário líquido = %5.2f",sal_liq);
	//Mostra a classificação
	if (sal_liq < 350)
		 printf("\nMal Remunerado");
	if (sal_liq >= 350 && sal_liq <= 600)
		 printf("\nNormal");
	if (sal_liq > 600)
		 printf("\nBem Remunerado");
	getchar();
	return 0;
}
