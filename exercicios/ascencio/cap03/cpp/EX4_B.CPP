#include <stdio.h>
int main()
{ float sal, aumento, novosal;
  // Mostra mensagem antes da leitura do sal�rio
  printf("\nDigite o sal�rio do funcion�rio: ");
  // Recebe o sal�rio
  scanf("%f%*c",&sal);
  // Calcula o valor do aumento
   aumento = sal * 25/100;
  // Calcula o novo sal�rio
  novosal = sal + aumento;
  // Mostra o novo sal�rio
  printf("\nNovo sal�rio = %0.2f", novosal);
  // P�ra o programa a espera de um ENTER
  getchar();
  return 0;
}
