#include <stdio.h>
int main()
{ float sal, novosal;
  // Mostra mensagem antes da leitura do sal�rio
  printf("\nDigite o sal�rio do funcion�rio: ");
  // Recebe o sal�rio
  scanf("%f%*c",&sal);
  // Calcula o novo sal�rio
  novosal = sal + sal * 25/100;
  // Mostra o novo sal�rio
  printf("\nNovo sal�rio = %0.2f", novosal);
  // P�ra o programa a espera de um ENTER
  getchar();
  return 0;
}
