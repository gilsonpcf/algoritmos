#include <stdio.h>
int main()
{   float sal, novo_sal, boni, aux;
	// Mostra mensagem solicitando o valor do sal�rio
	printf("Digite o valor do sal�rio: ");
	//Recebe o valor do sal�rio
	scanf("%f%*c",&sal);
	// Calcula a bonifica��o
	if (sal <= 500)
		 boni= sal * 5/100;
	if (sal > 500 && sal < 1200)
		 boni= sal * 12/100;
	if (sal >= 1200)
		 boni= 0;
	// Calcula o aux�lio escola
	if (sal <= 600)
		 aux= 150;
	if (sal > 600)
		 aux= 100;
	//Calcula o novo sal�rio
	novo_sal = sal + boni + aux;
	//Mostra o valor do novo sal�rio
	printf("Novo sal�rio = %5.2f",novo_sal);
	//P�ra o programa a espera de ENTER
	getchar();
	return 0;
}
