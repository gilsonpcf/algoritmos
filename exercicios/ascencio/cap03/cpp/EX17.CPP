#include <stdio.h>
int main ()
{   float salario, cheque1, cheque2, cpmf1, cpmf2, saldo;
	// Mostra mensagem antes da leitura do valor do sal�rio
	printf("\nDigite o sal�rio recebido: ");
	// Recebe o valor do sal�rio
	scanf("%f%*c",&salario);
	// Mostra mensagem antes da leitura do valor do 1� cheque
	printf("\nDigite o valor do 1� cheque: ");
	// Recebe o valor do 1� cheque emitido
	scanf("%f%*c",&cheque1);
	// Mostra mensagem antes da leitura do valor do 2� cheque
	printf("\nDigite o valor do 2� cheque: ");
	// Recebe o valor do 2� cheque emitido
	scanf("%f%*c",&cheque2);
	// Calcula CPMF referente ao 1� cheque
	cpmf1 = cheque1 * 0.38 / 100;
	// Calcula CPMF referente ao 2� cheque
	cpmf2 = cheque2 * 0.38 / 100;
	// Calcula o saldo
	saldo = salario - cheque1 - cheque2 - cpmf1 - cpmf2;
	// Mostra o saldo
	printf("\nO valor do saldo �: %4.2f",saldo);
	// P�ra o programa a espera de um ENTER
	getchar();
	return 0;
}
