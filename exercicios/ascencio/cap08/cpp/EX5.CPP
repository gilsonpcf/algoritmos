#include <stdio.h>
float calculo_reajuste(float PA, float PN)
{ float result;
	result = (100 * PN - 100 * PA) / PA;
	return result;
}
int main()
{   float precoantigo, precoatual, acrescimo;
	printf("Digite o pre�o antigo: ");
	scanf("%f%*c",&precoantigo);
	printf("Digite o pre�o final: ");
	scanf("%f%*c",&precoatual);
	acrescimo = calculo_reajuste(precoantigo, precoatual);
	// o uso de %% se faz necess�rio para imprimir o caractere %
	printf("\nO reajuste foi de %5.2f%%",acrescimo);
	getchar();
	return 0;
}
