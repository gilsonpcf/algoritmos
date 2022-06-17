#include <stdio.h>
int main()
{ float sal, salreceber, imp;
  // Mostra mensagem antes da leitura do salário
  printf("\nDigite o salário do funcionário: ");
  // Recebe o salário
  scanf("%f%*c",&sal);   
  // Calcula o imposto
  imp = sal * 10/100;
  // Calcula o salário a receber
  salreceber = sal + 50 - imp;
  // Mostra o salário a receber
  printf("\nSalário a receber = %4.2f",salreceber);
  // Pára o programa a espera de um ENTER
  getchar();
  return 0;
}
