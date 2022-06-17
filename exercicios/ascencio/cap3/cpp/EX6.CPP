#include <stdio.h>
int main()
{ float sal, salreceber, grat, imp;
  // Mostra mensagem antes da leitura do salário
  printf("\nDigite o salário do funcionário: ");
  // Recebe o salário
  scanf("%f%*c",&sal);
  // Calcula a gratificação
  grat = sal * 5/100;
  // Calcula o imposto
  imp = sal * 7/100;
  // Calcula o salário a receber
  salreceber = sal + grat - imp;
  // Mostra o salário a receber
  printf("\nSalário a receber = %4.2f",salreceber);
  // Pára o programa a espera de um ENTER
  getchar();
  return 0;
}
