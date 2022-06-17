#include <stdio.h>
int main()
{ float sal, novosal;
  // Mostra mensagem antes da leitura do salário
  printf("\nDigite o salário do funcionário: ");
  // Recebe o salário
  scanf("%f%*c",&sal);
  // Calcula o novo salário
  novosal = sal + sal * 25/100;
  // Mostra o novo salário
  printf("\nNovo salário = %0.2f", novosal);
  // Pára o programa a espera de um ENTER
  getchar();
  return 0;
}
