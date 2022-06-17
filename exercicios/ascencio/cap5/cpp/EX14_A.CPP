#include <stdio.h>
int main()
{   float valor_inicial, juros, valor_parc, total, valor_juros;
	int num_parc, i;
	printf("\nDigite o valor inicial da dívida: ");
	scanf("%f%*c",&valor_inicial);
	printf("Valor da dívida");
	printf("\tValor dos juros");
	printf("\tQuantidade de parcelas");
	printf("\tValor da parcela");
	juros = 0;
	num_parc = 1;
	total = valor_inicial;
	valor_parc = valor_inicial;
	printf("\n%5.2f",total);
	printf("\t\t\t%5.2f",juros);
	printf("\t\t%d",num_parc);
    printf("\t\t\t%5.2f",valor_parc);
	juros = juros + 10;
	num_parc = num_parc + 2;
	for(i=1;i<=4;i++)
	{
		valor_juros = valor_inicial * juros / 100;
		total = valor_inicial + valor_juros;
		valor_parc = total / num_parc;
		printf("\n%5.2f",total);
  	    printf("\t\t\t%5.2f",valor_juros);
        printf("\t\t%d",num_parc);
        printf("\t\t\t%5.2f",valor_parc);
		juros = juros + 5;
		num_parc = num_parc + 3;
	 }
	getchar();
	return 0;
}
