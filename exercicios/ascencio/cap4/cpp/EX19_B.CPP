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
				else if (peso <= 90)
					    printf("\nClassificação D ");
				     else 
                        printf("\nClassificação G ");
		 }
	else if (altura <= 1.70)
		    {
               if (peso <= 60)
			     printf("\nClassificação B ");
        	   else if (peso <= 90)
			           printf("\nClassificação E ");
                    else
                       printf("\nClassificação H ");
		 }
		 else
		 {
			if (peso <= 60)
				printf("\nClassificação C ");
			else if (peso <= 90)
				   printf("\nClassificação F ");
			     else 
				   printf("\nClassificação I ");
		 }
	//Pára o programa a espera de um ENTER
	getchar();
	return 0;
}
