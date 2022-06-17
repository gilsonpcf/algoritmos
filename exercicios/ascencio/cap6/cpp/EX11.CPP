#include <stdio.h>

int main()
{   float temp[12], maior=0, menor=0;
	int cont, maior_mes=0, menor_mes=0;

	for (cont=0; cont<12; cont++)
	{   printf("Digite a temperatura do mes %d: ", cont+1);
		scanf("%f%*c", &temp[cont]);
		if (cont == 0)
			 {   maior = temp[cont];
				 menor = temp[cont];
				 maior_mes = cont;
				 menor_mes = cont;
			 }
		else
			 { if (temp[cont] > maior)
						{ maior = temp[cont];
						  maior_mes =  cont;
						}
				 if (temp[cont] < menor)
						{ menor = temp[cont];
						  menor_mes = cont;
						}
			 }
	}
	printf("\nA maior temperatura foi %6.2f, ocorrida no mes de ", maior);
	switch (maior_mes+1)
	{ case 1: printf("JANEIRO");
	          break;

		case 2: printf("FEVEREIRO");
						break;

		case 3: printf("MARCO");
						break;

		case 4: printf("ABRIL");
						break;

		case 5: printf("MAIO");
						break;

		case 6: printf("JUNHO");
						break;

		case 7: printf("JULHO");
						break;

		case 8: printf("AGOSTO");
						break;

		case 9: printf("SETEMBRO");
						break;

		case 10: printf("OUTUBRO");
						 break;

		case 11: printf("NOVEMBRO");
						 break;

		case 12: printf("DEZEMBRO");
	}
	printf("\nA menor temperatura foi %6.2f, ocorrida no mes de ", menor);
	switch (menor_mes+1)
	{ case 1: printf("JANEIRO");
	          break;

		case 2: printf("FEVEREIRO");
						break;

		case 3: printf("MARCO");
						break;

		case 4: printf("ABRIL");
						break;

		case 5: printf("MAIO");
						break;

		case 6: printf("JUNHO");
						break;

		case 7: printf("JULHO");
						break;

		case 8: printf("AGOSTO");
						break;

		case 9: printf("SETEMBRO");
						break;

		case 10: printf("OUTUBRO");
						 break;

		case 11: printf("NOVEMBRO");
						 break;

		case 12: printf("DEZEMBRO");
	}
	getchar();
	return 0;
}
