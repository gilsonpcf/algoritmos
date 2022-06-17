#include <stdio.h>
int main()
{ float sal, aumento, novosal;
  // Mostra mensagem antes da leitura do salário
  printf("\nDigite o salário do funcionário: ");
  // Recebe o salário
  scanf("%f%*c",&sal);
  // Calcula o valor do aumento
   aumento = sal * 25/100;
  // Calcula o novo salário
  novosal = sal + aumento;
  // Mostra o novo salário
  printf("\nNovo salário = %0.2f", novosal);
  // Pára o programa a espera de um ENTER
  getchar();
  return 0;
}
