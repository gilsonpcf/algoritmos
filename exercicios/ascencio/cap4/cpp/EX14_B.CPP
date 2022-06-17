#include <stdio.h>
int main()
{   float sal, novo_sal, boni, aux;
	// Mostra mensagem solicitando o valor do salário
	printf("Digite o valor do salário: ");
	//Recebe o valor do salário
	scanf("%f%*c",&sal);
	// Calcula a bonificação
	if (sal <= 500)
		 boni = sal * 5/100;
	else if (sal <1200)
				boni = sal * 12/100;
			 else
				boni = 0;
	// Calcula o auxílio escola
	if (sal <= 600)
		 aux = 150;
	else
		 aux = 100;
	//Calcula o novo salário
	novo_sal = sal + boni + aux;
	//Mostra o valor do novo salário
	printf("Novo salário = %5.2f",novo_sal);
	//Pára o programa a espera de ENTER
	getchar();
	return 0;
}
