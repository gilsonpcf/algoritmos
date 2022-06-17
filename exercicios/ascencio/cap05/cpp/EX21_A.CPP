#include <stdio.h>
int main()
{ float media, perc, soma_par, qtd_par, soma, qtd, qtd_impar;
  int num, maior, menor;
  qtd = 0;
  qtd_par = 0;
  soma_par = 0;
  qtd_impar = 0;
  soma = 0;
  printf("Digite um valor: ");
  scanf("%d%*c",&num);
	while (num != 30000)
    { if (qtd == 0)
				{   maior = num;
					menor = num;
				}
			else
				{ if (num > maior)
						maior = num;
					if (num < menor)
						menor = num;
				}
		 soma = soma + num;
		 qtd = qtd + 1;
		 if (num%2 == 0)
			{   soma_par = soma_par + num;
				qtd_par = qtd_par + 1;
			}
		 else
			qtd_impar = qtd_impar + 1;
		 printf("Digite um valor: ");
		 scanf("%d%*c",&num);
	}
	printf("\nSoma dos valores = %5.0f",soma);
	printf("\nQuantidade de valores digitados = %5.0f",qtd);
	if (qtd == 0)
	 printf("\nNenhum número digitado");
	else
		{
		 media = soma / qtd;
		 printf("\nMédia dos valores digitados = %5.2f",media);
		 printf("\nMaior valor digitado = %d",maior);
		 printf("\nMenor valor digitado = %d",menor);
		 if (qtd_par == 0)
			printf("\nNenhum par");
		 else
			{
				media = soma_par / qtd_par;
				printf("\nMédia dos números pares = %5.2f",media);
			}
		 perc = qtd_impar * 100 / qtd;
		 printf("\nPercentual de números ímpares digitados = %5.2f%",perc);
	 }
	getchar();
	return 0;
}
