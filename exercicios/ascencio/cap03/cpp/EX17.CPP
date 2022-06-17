#include <stdio.h>
int main ()
{   float salario, cheque1, cheque2, cpmf1, cpmf2, saldo;
	// Mostra mensagem antes da leitura do valor do salário
	printf("\nDigite o salário recebido: ");
	// Recebe o valor do salário
	scanf("%f%*c",&salario);
	// Mostra mensagem antes da leitura do valor do 1º cheque
	printf("\nDigite o valor do 1º cheque: ");
	// Recebe o valor do 1º cheque emitido
	scanf("%f%*c",&cheque1);
	// Mostra mensagem antes da leitura do valor do 2º cheque
	printf("\nDigite o valor do 2º cheque: ");
	// Recebe o valor do 2º cheque emitido
	scanf("%f%*c",&cheque2);
	// Calcula CPMF referente ao 1º cheque
	cpmf1 = cheque1 * 0.38 / 100;
	// Calcula CPMF referente ao 2º cheque
	cpmf2 = cheque2 * 0.38 / 100;
	// Calcula o saldo
	saldo = salario - cheque1 - cheque2 - cpmf1 - cpmf2;
	// Mostra o saldo
	printf("\nO valor do saldo é: %4.2f",saldo);
	// Pára o programa a espera de um ENTER
	getchar();
	return 0;
}
