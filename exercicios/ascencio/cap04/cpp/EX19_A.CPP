#include <stdio.h>
int main()
{   float altura, peso;
	//Mostra mensagem solicitando o valor da altura
	printf("Digite a altura ");
	//Recebe o valor da altura
	scanf("%f%*c",&altura);
	//Mostra mensagem solicitando o valor do peso
	printf("Digite o peso ");
	//Recebe o valor do peso
	scanf("%f%*c",&peso);
	if (altura < 1.20)
		 {
				if (peso <= 60)
					printf("\nClassificação A ");
				if (peso > 60 && peso <= 90)
					printf("\nClassificação D ");
				if (peso > 90)
					printf("\nClassificação G ");
		 }
    if (altura >= 1.20 && altura <= 1.70)
		 {
		 if (peso <= 60)
			printf("\nClassificação B ");
		 if (peso > 60 && peso <= 90)
			printf("\nClassificação E ");
		 if (peso > 90)
			printf("\nClassificação H ");
		 }
	if (altura > 1.70)
		 {
			if (peso <= 60)
				printf("\nClassificação C ");
			if (peso > 60 && peso <= 90)
				printf("\nClassificação F ");
			if (peso > 90)
				printf("\nClassificação I ");
		 }
	//Pára o programa a espera de um ENTER
	getchar();
	return 0;
}
