#include <stdio.h>
int main()
{   int cod_prod, cod_pais;
    float peso_quilos, peso_gramas, pre_total, imposto, valor_total, pre_grama;
  	//Mostra mensagem solicitando o código do produto
	printf("Digite o código do produto, um número entre 1 e 10: ");
	//Recebe o código do produto
	scanf("%d%*c",&cod_prod);
	//Mostra mensangem solicitando o peso do produto em quilos
	printf("Digite o peso do produto em quilos: ");
	//Recebe o peso do produto em quilos
	scanf("%f%*c",&peso_quilos);
	//Mostra mensagem solicitando o código do país
	printf("Digite o código do país, um número entre 1 e 3: ");
	//Recebe o código do país
	scanf("%d%*c",&cod_pais);
	//Calcula o peso em gramas
	peso_gramas = peso_quilos * 1000;
	//Mostra o peso em gramas
	printf("Peso em gramas = %5.2f",peso_gramas);
	//Escolhe o preço do grama de acordo com o código do produto
	if (cod_prod >= 1 && cod_prod <= 4)
		 pre_grama = 10;
	if (cod_prod >= 5 && cod_prod <= 7)
		 pre_grama = 25;
	if (cod_prod >= 8 && cod_prod <= 10)
		 pre_grama = 35;
	//Calcula o preço total
	pre_total = peso_gramas * pre_grama;
	//Mostra o preço total
	printf("\nPreço total = %5.2f",pre_total);
	//Calcula o imposto de acordo com o país de origem
	if (cod_pais == 1)
		 imposto = 0;
	if (cod_pais == 2)
		 imposto = pre_total * 15/100;
	if (cod_pais == 3)
		 imposto = pre_total * 25/100;
	//Mostra o imposto
	printf("\nImposto = %5.2f",imposto);
	//Calcula o valor total
	valor_total = pre_total + imposto;
	//Mostra o valor total
	printf("\nValor Total = %5.2f",valor_total);
	getchar();
	return 0;
}
