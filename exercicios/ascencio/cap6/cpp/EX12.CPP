#include <stdio.h>

int main()
{   float consumo[5], menor_cons=0, valor;
	int i, menor_vei=0;
	char veiculo[5][20];

	for (i=0;i<5;i++)
	{ printf("\nDigite o modelo do %d.o veiculo: ", i+1);
	  scanf("%s%*c", veiculo[i]);
	}
	for (i=0;i<5;i++)
	{   printf("\nDigite o consumo do %d.o veiculo: ", i+1);
		scanf("%f%*c", &consumo[i]);
		if (i == 0)
			 { menor_cons = consumo[i];
			   menor_vei = i;
			 }
		else
			 { if (consumo[i] > menor_cons)
						{ menor_cons = consumo[i];
					      menor_vei = i;
						}
			 }
		valor = 1000 / consumo[i];
		printf("O veiculo %s consome %6.2f litro(s) de combustivel para percorrer 1000Km/s", veiculo[i], valor);
	}
	printf("\n\nO veiculo mais economico e o %s", veiculo[menor_vei]);
	getchar();
	return 0;
}
