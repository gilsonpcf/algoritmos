#include <stdio.h>
int main()
{   int cod_est, cod_carga;
	float peso_toneladas, peso_quilos, pre_carga, imposto, valor_total;
	//Mostra mensagem solicitando o c�digo do estado
	printf("Digite o c�digo do estado ");
	//Recebe o c�digo do estado
	scanf("%d%*c",&cod_est);
	//Mostra mensagem solicitando o peso da carga em toneladas
	printf("Digite o peso da carga em toneladas ");
	//Recebe o peso da carga em toneladas
	scanf("%f%*c",&peso_toneladas);
	//Mostra mensagem solicitando o c�digo da carga
	printf("Digite o c�digo da carga ");
	//Recebe o c�digo da carga
	scanf("%d%*c",&cod_carga);
	//Calcula o peso em quilos
	peso_quilos = peso_toneladas * 1000;
	//Mostra o peso em quilos
	printf("Peso da carga em quilos = %5.2f",peso_quilos);
	//Calcula o pre�o da carga
	if (cod_carga >= 10  && cod_carga <= 20)
		 pre_carga = 100 * peso_quilos;
	else if (cod_carga >= 21 && cod_carga <= 30)
		    pre_carga = 250 * peso_quilos;
	     else pre_carga = 340 * peso_quilos;
	//Mostra o pre�o da carga
	printf("\nPre�o da carga = %5.2f",pre_carga);
	//Calcula o imposto
	switch (cod_est)
	{
	case 1:
				 imposto = pre_carga * 35/100;
				 break;
	case 2:
				 imposto = pre_carga * 25/100;
				 break;
	case 3:
				 imposto = pre_carga * 15/100;
				 break;
	case 4:
				 imposto = pre_carga * 5/100;
				 break;
	default:
					imposto = 0;
	}
	//Mostra o valor do imposto
	printf("\nValor do imposto = %5.2f",imposto);
	//Calcula o valor total
	valor_total = pre_carga + imposto;
	//Mostra o valor total
	printf("\nValor total da carga = %5.2f",valor_total);
	getchar();
	return 0;
 }
